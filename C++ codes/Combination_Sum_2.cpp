#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getCombination(int arr[], int size, int index, int target, vector<int> ds)
{
	if(target == 0){
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
		cout<<endl;
		return;
	}

	for(int i=index;i<size;i++)
	{
		if(i>index && arr[i] == arr[i-1]) continue;
		if(arr[i] > target) break;

		ds.push_back(arr[i]);
		getCombination(arr, size, index+1, target-arr[i], ds);
		ds.pop_back();
	}
	return;
}
int main()
{
	int arr[] = {10,1,2,7,6,1,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+size);
	int target = 8;
	vector<int> ds;
	getCombination(arr, size, 0, target, ds);
}