/*
* PEuler_5.cpp
* Created by: Ugo Onuke
* 3 Oct 2017
* 16:38:00
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count = 0, top = 20;
	unsigned int a = 1;
	while(count != top)
	{
		a++;
		count = 0;
		for(int bottom = 1; bottom <= top; bottom++)
		{
			if(double(a%bottom)  == 0) count++;
			if(count != bottom) break;
		}
	}
	cout<<a<<" divides evenly numbers from 1 to "<<top<<endl;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
