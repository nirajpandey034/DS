#include <iostream>
#include <vector>
using namespace std;

// iterative approach
void BS(vector<int> vec, int size, int numberToFind)
{
    int low = 0;
    int high = size - 1;
    bool found = false;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (numberToFind == vec[mid])
            found = true;
        else
            found = false;
        if (found) // break the loop when we get the element
            break;

        if (numberToFind < vec[mid])
            high = mid;
        if (numberToFind > vec[mid])
            low = mid + 1;
    }

    if (found)
        cout << "Element found";
    else
        cout << "Element not found";
}
int main()
{
    vector<int> vec;
    int numberToFind = 10;
    for (int i = 1; i <= 10; i++)
        vec.push_back(i);

    BS(vec, vec.size(), numberToFind);
}