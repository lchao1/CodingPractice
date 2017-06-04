#include <iostream>
using namespace std;

/*
   Given a string
   return 'true' if input string is palindrome
   return 'false' if input string is not
 
   Ex: 
   "sagas" //true
   "deleveled" //true
   "tootsieroll" //false
 */

int main(void) {

	//get string from user input
	int n;
	char in1[n];
	cin >> in1[n];

	//initialize flipped array
	char in1flip[n];

	//flip array
	//int start = in1[0];
	//int end = in1[n-1];

	for (int i = 0; i<n; i++) {
		in1flip[i] = in1[n-1-i];
		cout << in1flip;
	}

	//check element by element
	for(int i=0; i<n; i++) {
		if (in1[i] != in1flip[i]) {
			return false;
		}
		return true;
	}
}

