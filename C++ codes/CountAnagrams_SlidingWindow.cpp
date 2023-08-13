#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Hello Niraj, Here you go
	string str = "aabaabaa";
	int s = str.length();
	string pattern = "aaba";
	int p = pattern.length();
	map<char, int> map;

	//pointers
	int i,j=0;

	//used variables
	int map_count, anagram_count=0;

	//filling the map with pattern
	for(int i=0;i<p;i++)
		map[pattern[i]]++;

	map_count = map.size();   //initializing with total number of unique elements in the map
	while(j<s)
	{
		//calculation part
		//will check if element exists in the map or not
		if(map.find(str[j]) != map.end())
		{
			map[str[j]]--;
			if(map[str[j]] == 0)
				map_count--;
		}

		if((j-i+1) < p)
			j++;
		else if((j-i+1) == p)
		{
			if(map_count == 0)
				anagram_count++;
			//increase the occurence of the i'th elemtent
			map[str[i]]++;
			if(map[str[i]] == 1)
				map_count++;      //increasing the frequency in the map after the element is out of out window
			i++;
			j++;
		}
	}
	cout<<"Numbers of Anagrams: "<<anagram_count<<endl;

	return 0;
}
