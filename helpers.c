/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n<1)
      return false;
    int start_point = 0;
    int center = (start_point+(n-1))/2;
    while (center>start_point)
    {
      center = (start_point+(n-1))/2;
      if (value==values[center])
      {
        return true;
      }
      else if(value<values[center])
      {
        n = center;
        search(value, values, n);
      }
      else
      {
        start_point=center++;
        search(value, values, n);
      }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
