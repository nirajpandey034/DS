#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool getSubsequence(int index, vector<int> &sub, int arr[], int size, int k, int sum){
	if(index >= size)
	{
		if(sum == k)
		{
			cout<<"[ ";
			for(int i=0;i<sub.size();i++)
				cout<<sub[i]<<" ";
			cout<<']';
			cout<<endl;

			return true;
		}
		else return false;
	}

	sum += arr[index];
	sub.push_back(arr[index]); //take
	if(getSubsequence(index+1, sub, arr, size, k, sum))
		return true;

	sum -= arr[index];
	sub.pop_back();           //not take
	if(getSubsequence(index+1, sub, arr, size, k, sum))
		return true;

	return false;
}

int main()
{
	int arr[] = {3,1,2,1};
	int k=2;
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	int sum=0;
	getSubsequence(0, vec, arr, size, k, sum);
}