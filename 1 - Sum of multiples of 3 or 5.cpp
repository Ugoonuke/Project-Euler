/*
* PEuler_1.cpp
* Created by: Ugo Onuke
* 14 Sep 2017
* 14:39:48
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 1000;
	int b = 0;
	for(int i = 1; i < a; i++) {
		if(i % 3 == 0 || i % 5 == 0) b+=i;
	}
	cout<<"Sum of multiples of 3 or 5 from 1-"<<a<<" is "<<b<<endl;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
