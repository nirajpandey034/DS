#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int> arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        cout << "Not found";
        return -1;
    }
    if (target < arr[0]) // handling for target which is less than the minimal element
        return 0;
    else if (target > arr[arr.size() - 1]) // handling for target which is greater than the max element
        return arr.size();
    if (arr[mid] == target || (arr[mid - 1] < target && arr[mid + 1] > target) || (start == end))
        return mid;

    if (arr[mid] < target)
        return searchInsertPosition(arr, mid + 1, end, target);
    else if (arr[mid] > target)
        return searchInsertPosition(arr, start, mid, target);

    return -100;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int target = 1;
    cout << searchInsertPosition(arr, 0, arr.size(), target);
    return 0;
}