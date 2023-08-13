#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSubsequence(int index, vector<int> &sub, int arr[], int size, int k, int sum, int l, int r){
	if(index >= size)
	{
		if(sum == k)
			return 1;
		else
			return 0;
	}

	sum += arr[index];
	sub.push_back(arr[index]); //take
	l=getSubsequence(index+1, sub, arr, size, k, sum, l, r);

	sum -= arr[index];
	sub.pop_back();           //not take
	r=getSubsequence(index+1, sub, arr, size, k, sum, l, r);

	return l+r;
}

int main()
{
	int arr[] = {3,1,2,1};
	int k=3;
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	int sum=0;
	int l=0,r=0;
	cout<<"Number of subsets: "<<getSubsequence(0, vec, arr, size, k, sum, l, r)<<endl;
}