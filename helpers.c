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
    while (n>1)
    {
      if (value==values[n/2])
      {
        return true;
      }
      else if(value<values[n/2])
      {
        n=n/2;
        search(value, values[], n);
      }
      else
      {
        values[n/2]=
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
