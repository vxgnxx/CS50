#include <cs50.h>
#include <stdio.h>

int addTwoInts(int a, int b);

int main(void) {
    int x = get_int("Put the first number: ");
    int y = get_int("Put the second number: ");
    int z = addTwoInts(x, y);
    printf("The sum of %i and %i is %i\n", x, y, z);
}

int addTwoInts(int a, int b) {
    int sum = a + b;
    return sum;
}