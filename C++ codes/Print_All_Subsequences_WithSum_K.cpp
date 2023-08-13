#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getSubsequence(int index, vector<int> &sub, int arr[], int size, int k, int sum){
	if(index >= size)
	{
		if(sum == k)
		{
			cout<<"[ ";
			for(int i=0;i<sub.size();i++)
				cout<<sub[i]<<" ";
			cout<<']';
			cout<<endl;
		}
		return;
	}

	sum += arr[index];
	sub.push_back(arr[index]); //take
	getSubsequence(index+1, sub, arr, size, k, sum);

	sum -= arr[index];
	sub.pop_back();           //not take
	getSubsequence(index+1, sub, arr, size, k, sum);
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