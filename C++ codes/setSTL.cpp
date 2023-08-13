#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_set<int> set; //does not contains duplicates

	int arr[] = {1,3,2,4,1,2};

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
	{
		set.insert(arr[i]);
	}

	for(auto i=set.begin(); i!= set.end(); ++i)
	{
		cout<<*i<<endl;
	}
}