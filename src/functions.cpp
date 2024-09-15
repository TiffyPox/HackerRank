#include <iostream>
#include <cstdio>
#include <array>

int max_of_four(int a, int b, int c, int d)
{
    std::array <int, 4>nums = {a, b, c, d};
    
    int greatest = 0;
    
    greatest += a;
    
    for (int n : nums)
    {
        if (n > greatest)
        {
            greatest = n;
        }
    }
    
    return greatest;
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}