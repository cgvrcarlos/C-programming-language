# Exercise 1.6

Verify that the expression `getchar() != EOF` is 0 or 1.

## Solution

The expression

```c
c = getchar() != EOF;
```

is equivalent to

```c
c = (getchar() != EOF)
```

While `getchar` has a character to read it does not return the end of file and `getchar() != EOF` is true. So 1 is assigned to `c`. When the program encounters the end of file the expression is false. then 0 is assigned to `c` and the loop terminates.
