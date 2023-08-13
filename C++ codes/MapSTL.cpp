#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int, int> mp;
	unordered_map<int, int>::iterator iter; //iterator for map
	int arr[] = {1,3,2,4};

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}

	//mp.insert({5, 30}); //inserts key-value pair

	// if(mp.find(5) != mp.end()) // to find wheather element is in the map or not
	// 	cout<<"Found 1";
	// else
	// 	cout<<"not found anything like that";
	//mp.clear();	//clears everything in the map
	//mp.erase(5);  //deleted particular key-value pair
	for (iter = mp.begin(); iter != mp.end(); ++iter) {  //iterat through the map
    	cout << iter->first << "->" << iter->second << endl;
	}
}