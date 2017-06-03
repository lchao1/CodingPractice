#include <iostream>
using namespace std;

/*  Write a program that will count and print numbers to 100 and for every multiple of 3 will write 'fizz'
	and for every multiple of 5 will write 'buzz' and for every multiple of 3 and 5 will write 'fizzbuzz'" */


int main(void) {
	for (int i=1; i<=100; i++) {
		//cout << i;
		if (i%3 == 0) {
			cout << "fizz";
		}
		if (i%5 == 0) {
 			cout << "buzz";
		}
		if (i%5 != 0 && i%3 != 0) {
			cout << i;
		}
		cout << endl;
	}
}



