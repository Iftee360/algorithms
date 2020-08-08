# *Linear Search*


## Description

>  In Linear Search, the idea of algorithm is to **iterate** across the Array from **left to right**, searching for a specified element


## Pseudocode
	* Repeat, starting at the first element
	   * If the first element is what you're looking for (the target), stop.
	   * otherwise , move to the next element

## Different Cases

#### 1) worst-case scenario [ Big O (n) ] :  
We have to look through the entire array of n elements,
either because the target element is the last element of the array or doesn't exist in the array at all.

#### 2) best-case scenario [ Sigma (1) ] :
the target element is the first element of the array,
and so we can stop looking immediately after we start

## Code (in C language)

```
#include <stdio.h>
#include <stdlib.h>

  int anArray[10] = {12, 213, 32, 23, 123, 32, 12, 3, 323, 2};

	int main(int argc, char const *argv[]) {


	  for (int i=0; i <= 9; i++)
	  {
	    if(anArray[i] == 323)
	    {
	      printf("the target number is at location %d of the Array.\n", i);
	      return 1;
	    }
	  }
	  return 0;
	}

```
## Output:
```
the target is at location 8 of the Array.
```
