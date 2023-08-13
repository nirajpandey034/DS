#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getSubsequence(int index, vector<int> &sub, int arr[], int size){
	if(index >= size)
	{
		cout<<"[ ";
		for(int i=0;i<sub.size();i++)
			cout<<sub[i]<<" ";
		cout<<']';
		cout<<endl;
		return;
	}

	sub.push_back(arr[index]); //take
	getSubsequence(index+1, sub, arr, size);

	sub.pop_back();           //not take
	getSubsequence(index+1, sub, arr, size);
}

int main()
{
	int arr[] = {3,1,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	getSubsequence(0, vec, arr, size);
}