
/* Description
* In Linear Search, the idea of algorithm is to ITERATE across the
* Array from Left to Right, searching for a specified element
*/

/* Pseudocode
* Repeat, starting at the first element
    *If the first element is what you're looking for (the target), stop.
    *otherwise , move to the next element
*/

/* Cases
* Worst-case scenerio [Big O (n)]: WE have to look theough the entirearray of n elements,
either because the target element is the last element of the array or doesn't
exist in the array at all.

*Best-case scenenraio [Sigma (1)]: the trget element is the first element of the array,
and so we can stop looking immediately after we start
*/


//CODE (in C language)

#include <stdio.h>
#include <stdlib.h>

int anArray[10] = {12, 213, 32, 23, 123, 32, 12, 3, 323, 2};

int main(int argc, char const *argv[]) {

  //iteration
  for (int i=0; i <= 9; i++)
  {
      if(anArray[i] == 323)
      {
          //print result
          printf("the target number is at location %d of the Array\n", i);
          //exit the loop
          return 1;
      }
  }

  return 0;
}
