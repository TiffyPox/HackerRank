#include <iostream>

int main ()
{
    int n1 = 0;

    std::cin >> n1;

    int arr[n1];

    for (int i = 0; i < n1; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = n1 - 1; i >= 0; --i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}