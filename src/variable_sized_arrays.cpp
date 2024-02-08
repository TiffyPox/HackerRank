#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

int main() 
{
    // get the ammount of arrays and queries
    int numOfArrays = 0;
    int numsOfQueries = 0;

    std::cin >> numOfArrays >> numsOfQueries;

    // create the arrays
    int a[numOfArrays] = {0};

    for (int n : a)
    {
        int arr[] = {};

        // add numbers to temp array
        for (int i = 0; i < 10; ++i)
        {
            std::cin >> arr[i];
        }

        int arrNum = 0;
        int indexNum = 0;

        // print final array
        for (int i = 1; i < 10; ++i)
        {

        }
    }

    return 0;
}