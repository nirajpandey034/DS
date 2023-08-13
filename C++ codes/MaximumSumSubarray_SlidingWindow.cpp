#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Hello Niraj, Here you go
	int arr[] = {2,5,1,8,2,9,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;

	int _max = INT_MIN;
	int sum=0;

	//pointers
	int i,j=0;
	while(j < n)
	{
		sum += arr[j];
		if(j-i+1 < k)
		{
			j++;
		}
		else if(j-i+1 == k)
		{
			_max = max(_max, sum);
			sum -= arr[i];
			j++;
			i++;
		}
	}

	cout<<"Maximum sum is: "<<_max<<endl;
	return 0;
}