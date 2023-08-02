#include <iostream>
#include <vector>
using namespace std;

// Recursive approach
void BS(vector<int> vec, int size, int numberToFind, int low, int high)
{
    int mid = low + (high - low) / 2;
    if (low > high)
    {
        cout << "Not found";
        return;
    }
    if (numberToFind == vec[mid])
    {
        cout << "Found";
        return;
    }
    else if (numberToFind < vec[mid])
        BS(vec, size, numberToFind, low, mid);
    else if (numberToFind > vec[mid])
        BS(vec, size, numberToFind, mid + 1, high);
}
int main()
{
    vector<int> vec;
    int numberToFind = 145;
    for (int i = 1; i <= 10; i++)
        vec.push_back(i);

    int low = 0;
    int high = vec.size() - 1;
    BS(vec, vec.size(), numberToFind, low, high);
}