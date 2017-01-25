/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"
#include <stdio.h>

/**
 * Returns true if value is in array of n values, else false.
 */
// bool search(int value, int values[], int n)
// {
//     if (n<1)
//       return false;
//     int start_point = 0;
//     int center = (start_point+(n-1))/2;
//     while (center>start_point)
//     {
//       center = (start_point+(n-1))/2;
//       if (value==values[center])
//       {
//         return true;
//       }
//       else if(value<values[center])
//       {
//         n = center;
//         search(value, values, n);
//       }
//       else
//       {
//         start_point=center++;
//         search(value, values, n);
//       }
//     }
//     return false;
// }

bool search(int value, int values[], int n)
{
  if (n<1)
    return false;

  for (int i=0; i<n; i++)
  {
    if (value == values[i])
      return true;
    else
      return false;
  }
  return false;
}

/**
 * Sorts array of n values.
 */
 //bubble sorting
void sort(int values[], int n)
{
  int swap_counter = 1;
  int helper_byte;
  while (swap_counter > 0)
  {
    swap_counter = 0;
    for (int i = 0; i < n - 2; i++)
    {
      if (values[i] > values[i+1])
      {
        helper_byte = values[i];
        values[i] = values[i+1];
        values[i+1] = helper_byte;
        swap_counter++;
        printf("%d", values[i]);
      }
    }
  }
}
