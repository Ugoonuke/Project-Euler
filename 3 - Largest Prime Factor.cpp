/*
* PEuler_3.cpp
* Created by: Ugo Onuke
* 14 Sep 2017
* 15:43:18
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	long long int a = 600851475143, c, d;
	int b = 0, count = -1, temp;
	d = a;
	for(int i = 2; i < sqrt((double)a); i++) {
		for(int j = 1; j <= sqrt((double)i); j++) {
			if(i%j == 0) b++;
			if(b > 1) {
				b = 0;
				break;
			}
		}
		if(b == 1) {
			count++;
			c = i;
		}
		if(d%c == 0) {
			temp = c;
		}
	}
	cout<<"Highest Prime Factor of "<<d<<" is "<<temp<<endl;
	cout<<"\nEclipse C++"<<endl;
	return 0;
}
