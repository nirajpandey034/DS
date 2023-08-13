#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Hello Niraj, Here you go
	int arr[] = {-8, 2, 3, -6, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=2;

	queue<int> q;
	vector<int> out;

	//pointers
	int i,j=0;

	while(j<n)
	{
		if(arr[j] < 0)
		{
			q.push(arr[j]);
		}
		if((j-i+1) == k)
		{
			out.push_back(q.front());
			if(arr[i] == q.front())
			{
				q.pop();
			}
			i++;
		}
		else if((j-i+1) < k)
			j++;
	}

	//printing output
	for(int i=0;i<out.size();i++)
	{
		cout<<out[i]<<" ";
	}
	return 0;
}