#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void getCombination(int arr[], int index, int size, int target, vector<int> ds)
{
	if(index == size)
	{
		//print ds
		if(target == 0)
		{
			for(int i=0;i<ds.size();i++)
				cout<<ds[i]<<" ";
			cout<<endl;
		}
		return;
	}

	if(arr[index] <= target)
	{
		ds.push_back(arr[index]);
		getCombination(arr, index, size, (target-arr[index]), ds);
		ds.pop_back();
		
	}
	getCombination(arr, index+1, size, target, ds);
}
int main()
{
	int arr[] = {2,3,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int target=7;
	vector<int> ds;
	getCombination(arr, 0, size, target, ds);
}