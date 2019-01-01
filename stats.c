/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <math.h>
/* Size of the Data Set */
#define SIZE 40

void selection_sort(unsigned char *ptr, unsigned int count)
{
	int i=0, j=0, max_ind, temp;
	
	for(i=0;i<count-1;i++)
	{	
		max_ind=i;
		for(j=i;j<count-1;j++)
		{
			if(ptr[max_ind]<ptr[j+1])
			{
				max_ind=j+1;
			}
		}
		temp=ptr[i];
		ptr[i]=ptr[max_ind];
		ptr[max_ind]=temp;
	}
}

int main()
{
//	clrscr();

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  
  print_array(test, SIZE);
  print_statistics(test, SIZE);

  //selection_sort(test, SIZE);
  print_array(test,SIZE);
  return 0;	
}


// Global scope
/* Add other Implementation File Code Here */

void sort_array(unsigned char *ptr, unsigned int count)
{
	int i=0, j=0, temp;
	
	for(i=0;i<count-1;i++)
	{	
		for(j=0;j<count-1;j++)
		{
			if(ptr[j]<ptr[j+1])
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
}

void print_array(unsigned char *ptr, unsigned int count)
{
	unsigned int i = 0;
	printf("test = {");


	while ( i < count)
	{
		if(i % 8 == 0)
		{
			printf("\n       ");
		}

		printf(" %u",*ptr);
		if (i==39)
			printf("\n       }");
		
		i++;
		ptr++;
	}
}

void print_statistics(unsigned char *ptr, unsigned int count)
{
	selection_sort(ptr,count);
	//sort_array(ptr,count);
	unsigned int maximum, minimum, mean, median;
	minimum=find_minimum(ptr,count);
	mean=find_mean(ptr,count);
	median=find_median(ptr,count);
	maximum=find_maximum(ptr);
	printf("\nMaximum value of the array = %d",maximum);
	printf("\nMinimum value of the array = %d",minimum);
	printf("\nMean value of the array = %d",mean);
	printf("\nMedian value of the array = %d\n",median);
}

unsigned char find_median(unsigned char *ptr, unsigned int count)
{
	unsigned char med;
	if(count%2==0)
	{
		med=(*(ptr+(count/2))+*(ptr+((count+2)/2)))/2;
	}
	else
		med=(*ptr+(count/2));
	return med;
}

unsigned char find_mean(unsigned char *ptr, unsigned int count)
{
	int i=0;
	int sum=0;
	float avg;
	while (i<count)
	{
		sum+=*ptr;
		ptr++;
		i++;
	}
	avg = (float)(sum)/count;
	avg=roundf(avg);
	return (char)(avg);
}

unsigned char find_maximum(unsigned char *ptr)
{
	unsigned char max;
	max=ptr[0];
	return max;
}

unsigned char find_minimum(unsigned char *ptr, unsigned int count)
{
	unsigned char min;
	min=ptr[count-1];
	return min;
}