#include <iostream>
#include <cstdio>

int main() 
{
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