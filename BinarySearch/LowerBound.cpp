#include <iostream>
using namespace std;

// finding lower bound (smallest index such that arr[index] >= n)

void getLowerBound(int *arr, int size, int element)
{
    int low = 0;
    int high = size - 1;
    int position = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= element)
        {
            high = mid - 1;
            position = mid; // might be an answer
        }
        else
            low = mid + 1;
    }

    cout << position;
}
int main()
{
    int arr[] = {3, 5, 8, 15, 19, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 16;
    getLowerBound(arr, size, element);
    return 0;
}