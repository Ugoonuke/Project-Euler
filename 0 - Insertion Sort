/*
* Array_Insertion_Sort.cpp
* Created by: Ugo Onuke
* 24 Oct 2017
* 13:49:03
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int  n; // Array size
	cout<<"Enter the size of the array: ";
	cin>>n;
	int array[n], ind;
	cin>>array[0]; // Scan in first element of array
	for(int i = 1; i< n; i++)	{
		ind =i; // Keeps track of currently populated elements of array
		cin>>array[i];
		while(array[ind] <= array[ind-1] && ind != 0)	{ // Sorts the array as it takes in values
			int temp = array[ind]; // Save current element
			array[ind] = array[ind-1]; // Swap current element with previous
			array[ind-1] = temp; // Swap previous element with current
			ind--; // Iterate/repeat all the way down through the currently populated array
		}
	}
	cout<<"Sorted Array:"<<endl;
	for(int i = 0; i < n; i++)	{
		cout<<array[i]<<endl;
	}
	return 0;
}
