# Exercise 1.5

Modify the temperature conversion program to print the table in reverse order, this is, from 300 degrees to 0.

## Solution

The only modification is:

```c
for (fahr = 300; fahr >= 0; fahr = fahr - 20)
```
