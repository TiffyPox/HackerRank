#include <iostream>
#include <cstdio>
#include <array>

int main() 
{
    // Complete the code.
    int n1 = 0;
    int n2 = 0;
    
    const char* nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    std::cin >> n1 >> n2;
    
    for (; n1 <= n2; n1++)
    {
        if (n1 >= 1 && n1 <= 9)
        {
            std::cout << nums[n1 - 1] << std::endl;
        }
        else
        {
            std::cout << ((n1 % 2 == 0) ? "even" : "odd") << std::endl;
        }
    }

    return 0;
}