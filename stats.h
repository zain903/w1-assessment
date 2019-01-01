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
 * @file <stats.h> 
 * @brief <This header file is part of a C program that performs analytics on a given array with given size.>
 *
 * <This file contains function definition for this C program. It has definitions for functions which find the maximum, minimum, mean, and median of the given array. In addition, a function also reorders this data set from large to small>
 *
 * @author <Zain Mustafa>
 * @date <18-12-18>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char find_median(unsigned char *ptr, unsigned int count);
/**
 * @brief This function calculates the median of the data stored in an array of given size
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return The median value of the data stored in the given array
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_mean(unsigned char *ptr, unsigned int count);
/**
 * @brief This function calculates the mean of the data stored in an array of given size
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return The mean value of the data stored in the given array
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_maximum(unsigned char *ptr);
/**
 * @brief This function calculates the maximum of the data stored in an array of given size
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return The maximum value of the data stored in the given array
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_minimum(unsigned char *ptr, unsigned int count);
/**
 * @brief This function calculates the minimum of the data stored in an array of given size
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return The minimum value of the data stored in the given array
 */

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char *ptr, unsigned int count);
/**
 * @brief This function prints out the analytics performed on the data stored in the given array
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return nothing, the function type is void
 */

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *ptr, unsigned int count);
/**
 * @brief This function prints out the given array
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return nothing, the function type is void
 */

/* Add Your Declarations and Function Comments here */ 
void sort_array(unsigned char *ptr, unsigned int count);
/**
 * @brief This function sorts the given array in the order of largest to lowest
 *
 * <Add Extended Description Here>
 *
 * @param ptr a pointer variable which points to the starting address of the first element of the given array
 * @param count <add description here>
 * 
 * @return nothing, the function type is void
 */


#endif /* __STATS_H__ */
