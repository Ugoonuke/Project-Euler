/*
* PEuler_4.cpp
* Created by: Ugo Onuke
* 20 Sep 2017
* 10:35:20
*/
#include <iostream>
#include <string>

using namespace std;

void separate(int max, int h)
{
	bool test = false;
	int b, c, d, e, f, g, min, count, prime = 0, prime1 = 0, prime2 = 0;
	while (!test)
	{
		min = max;
		for(; min >= h; min--)
		{
			b = 0;
			count = 0;
			d = 10;
			e = 1;
			g = max*min;
			c = g;
			while(c > 0)
			{
				c /= d;
				b++;
			}
			int arr[b+1];
			f = b;
			for(; b > 1; b--)
			{
				e *= d;
			}
			for(int i = 0; i < f; i++)
			{
				arr[i] = g/e;
				g %= e;
				e /= d;
			}
			for(int i = 0; i < f; i++)
			{
				if(arr[i] == arr[f-(1+i)]) count++;
			}
			if(count == f)
			{
				if(max*min > prime2)
				{
					prime = max;
					prime1 = min;
					prime2 = max*min;
				}
			}
		}
		if(max*min <= h && !test)
		{
			if(prime != 0)
			{
				cout<<prime<<" * "<<prime1<<" = "<<prime2<<" is Highest Palindrome"<<endl;
				break;
			}
			else
			{
				cout<<"No Palindrome Found"<<endl;
				break;
			}
		}
		else max--;
	}
}
int main() {
	int a, b = 10, c =1, d;
	cout<<"Enter  the number of digits from 1-4: ";
	cin>>a;
	for(int i = 0; i < a; i++)
	{
		c *= b;
	}
	d = c /b;
	c--;
	separate(c, d);
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
