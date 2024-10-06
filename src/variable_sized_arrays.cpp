#include <cstdio>
#include <vector>
#include <iostream>

int main() 
{
    int totalArrays = 0;
    int totalQueries = 0;
    
    // Get number of arrays and number of queries:
    std::cin >> totalArrays >> totalQueries;
    
    // Create a vector of vectors to hold the arrays:
    std::vector<std::vector<int>> arrays(totalArrays);
    
    // Loop through each array:
    for (int i = 0; i <totalArrays; ++i)
    {
        int totalNums = 0;
        
        // Get the number of elements in the current array:
        std::cin >> totalNums;
        
        // Resize the current array to hold the elements:
        arrays[i].resize(totalNums);
        
        // Read the elements into the current array:
        for (int j = 0; j < totalNums; ++j)
        {
            std::cin >> arrays[i][j];
        }
    }
    
    // Process each query:
    for (int result = 0; result < totalQueries; ++result)
    {
        int i = 0;
        int j = 0;
        
        // Get the indices for the query:
        std::cin >> i >> j;
        
        // Output the element at the specified indices:
        std::cout << arrays[i][j] << std::endl;
    }
    
    return 0;
}
