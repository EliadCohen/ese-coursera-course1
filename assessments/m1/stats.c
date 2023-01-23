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

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  find_mean(&test, SIZE);
  int max, min;
  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);

}

/* Add other Implementation File Code Here */
// print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
void print_statistics(){


}

// print_array() -  Given an array of data and a length, prints the array to the screen
void print_array(unsigned char data[], int length){
  int i;
  printf("[ ");
  for (i = 0; i<length; i++){
    printf("%d ",data[i]);

  }
  printf("]\n");
}

// find_median() - Given an array of data and a length, returns the median value
float find_median(unsigned char data[], int length);

// find_mean() -  Given an array of data and a length, returns the mean
float find_mean(unsigned char *data, int length){
  float mean = 0;
  int i=0;
  unsigned char *movingPointer = data;
  for (i = 0; i<length; i++){
    mean += (float)*movingPointer;
    movingPointer++;
  }
  mean = mean/(float)length;
  //printf("The mean is: %.2f\n", mean); //debug
  return mean;

}

// find_maximum() -  Given an array of data and a length, returns the maximum
float find_maximum(unsigned char data[], int length){
  int i;
  int maximum = data[0];

  for (i = 1; i<length; i++){
    if (maximum < data[i]) {
      maximum = data[i];
    }
    
  }
  printf("The maximum is %d\n", maximum);
  return maximum;
}

// find_minimum() -  Given an array of data and a length, returns the minimum
float find_minimum(unsigned char data[], int length){
  int i;
  int minimum = data[0];

  for (i = 1; i<length; i++){
    if (minimum > data[i]) {
      minimum = data[i];
    }
    
  }
  printf("The minimum is %d\n", minimum);
  return minimum;
}

// sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
void sort_array(int* data[], int length);