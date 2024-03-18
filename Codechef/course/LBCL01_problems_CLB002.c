/* Introduction
Let us output an integer in C.

C has a few lines of code which we write in almost all programs.
These are the first 2 lines that you see in the program to your right. We are going to learn about them in some time.

For now, read the Line 5: "printf("%d", 12);"

Let's break down this line of code:

printf: This is a function in C used for printing or displaying information on the screen.

"%d": This is a format specifier. It tells printf how to interpret the data it's given. In this case, %d is used for integers (whole numbers).

12: This is the actual data you want to print. Here, it's the number 12.

So, when you write printf("%d", 12);, it tells the computer to print the integer 12 on the screen.

Note that this line contains a (;) semicolon at the end. Semicolon is mandatory at the end of statements in C.

Click on Submit below the IDE to know the result. Then click on next to continue. */
#include <stdio.h>

int main() {
  
  printf("%d", 12);
  
}