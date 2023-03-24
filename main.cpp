#include "TimSort.h"

#include <iostream>
#include <ctime>

#include <algorithm>

int main()
{
    srand((unsigned int)time(NULL));

    const int n = 35;

    int* arr = new int [n];

    for (size_t i = 0; i < n; ++i)
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    timSort(arr, n);

    for (size_t i = 0; i < n; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}