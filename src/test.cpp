#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& vector, int item)
{
    int low = 0;
    int high = vector.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = vector[mid];

        if (guess == item)
        {
            return mid;
        }

        if (guess > item)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}
int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    binarySearch(nums, 6);

    // to do: output 

    return 0;
}