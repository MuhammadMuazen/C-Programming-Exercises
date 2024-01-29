//I just could not undestand this question very good so I just copied the answer from the webstie:
//https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/c-programming-basic-exercises-140.php

#include <stdio.h>

int main(void) {
  int in;
  int nums[101] = {0}; // Initialize an array to store frequency of each number (from 1 to 100)
  int i;
  int max_val = 0; // Variable to keep track of the maximum frequency

  printf("\nInput the terms of the sequence:\n");

  while (scanf("%d", &in) != EOF) // Keep reading numbers until end of input (EOF)
    nums[in]++; // Increment the frequency count for the input number

  // Find the maximum frequency
  for (i = 1; i <= 100; i++) {
    if (max_val < nums[i])
      max_val = nums[i];
  }

  printf("Mode values of the said sequence in ascending order:\n");

  // Print numbers that have the maximum frequency
  for (i = 1; i <= 100; i++) {
    if (max_val == nums[i])
      printf("%d\n", i);
  }

  return 0; // End of the program
}
