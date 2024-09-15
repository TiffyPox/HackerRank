#include <iostream>
#include <cstdio>

int main() 
{
    // Print each element on a new line in the same order it was received as input. 
    // Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

    int i = 0;
    long lg = 0;
    char ch;
    float f;
    double d;
    
    // the space before %ld tells scanf to skip any whitespace characters
    scanf("%d %ld %c %f %lf", &i, &lg, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf", i, lg, ch, f, d);

    return 0;
}