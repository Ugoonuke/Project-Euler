/*
* PEuler_2.cpp
* Created by: Ugo Onuke
* 14 Sep 2017
* 15:07:51
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 1;
	int b = 2;
	int c, t;
	int d = b;
	cout<<"Please enter the length of Fibonacci sequence: ";
	cin>>c;
	cout<<"\nFibonacci Sequence\n1, 2";
	for(int i = 0; i < c-2; i++) {
		t = a;
		a = b;
		b+=t;
		if(b > 4000000) break;
		if(b%2 == 0)
		{
			cout<<", "<<b;
			d += b;
		}
		cout<<", "<<b;
	}
	cout<<"\n\nThe sum of the even-valued terms of the Fibonacci Sequence is "<<d<<endl;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
