# Excercise 1.1

Run the ``Hello World`` program in your system. Experiment with leaving out parts of the program, to see what error messages you get.

## Solution

`#include <stdio.h>

main()
{
  printf("Hello World");
}`

In this example teh newline character `(\n)` is missing, This leaves the cursor at the end of the line.

`#include <stdio.h>

main()
{
  printf("Hello World)
}`

In the second example the semicolon is missinf after `printf()`. The compiler should recognize that the semicolon is missing and print the apropiate message.

`#include <stdio.h>

main()
{
  printf("Hello World´);
}`

In the third example the double quote `"` after `\n` is mistyped as a single quote. The single quote, along with the right parenthesis and the semicolon, is taken as part of the string. The compiler should recognize  this as an error and complain that a double quote is missing, that a right parenthesis is missing before a right brace, the string is too long, or that there is a newline character in a string.

# Excersice 1.2

Experiment to find out what happens when `printf's` argument string contains `\c`, where `c` is some character not listed above. 

## Solution

If the character following the `\` is not one of those specified, the behabior is undefined.
