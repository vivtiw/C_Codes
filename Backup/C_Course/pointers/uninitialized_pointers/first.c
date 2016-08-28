/* 

This program explains about problems we face if pointer is not initialized.

Created:  Joe Zachary
Modified:
*/

#include <stdio.h>

void main () {

  int n;
  int *p;

  printf("The value of the location p points to is %d\n", *p);

  printf("Give me an integer to store at the location p points to: ");
  scanf("%d", &n);
  *p = n;

}

/*

Where p is actually pointing?

It depends on how the pointer was initialized by the C compiler. If it was initialized to 0, then it points to location 0; otherwise, it points some other random place. All we can say for sure is that we probably shouldn't be messing around with wherever it points!

what happens?

Depending upon the initial value of the pointer, your program may crash when it tries to read the value pointed to by ``p'', it may crash when it tries to write a new value to the place pointed to by ``p'', or it may not crash at all. If it does crash, you'll get an error message like ``Segmentation Fault (core dumped)''.
