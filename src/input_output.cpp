#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int n1, n2, n3;

    std::cout << "Please enter three numbers each separated by a space" << std::endl;
    
    std::cin >> n1 >> n2 >> n3;
    
    int sum = (n1 + n2 + n3);
    
    std::cout << "Your numbers added together equal " << sum << std::endl;
    
    return 0;
}