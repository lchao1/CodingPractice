#include <iostream>
#include <map>
using namespace std;

	/*
	 * 2-Sum: Given a sorted array, write a program to decide 
	 * if two elements sum up to a third element. 
	 * Print all combos of two elements that add up to a third
	 */


int main(void) {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 0; //sum of two terms
	int target = 0; //loop through array to check if sum = a term in the array
	int element_num = sizeof(arr)/sizeof(arr[0]);

	map <int, int> sum_arr;
	for (int k = 0; k<element_num; k++) {
		sum_arr[arr[k]];
	}

	for (int i=0; i<10; i++) {
		for (int j=i; j<10; j++) {
			sum = arr[i] + arr[j]; //sum two terms
			
			//to do a key lookup in C++
			if (sum_arr.count(sum) == 1) { //is 'sum' a key in my map?
				cout << arr[i] << " + "<< arr[j] << " is equal to ";
					cout << sum;
					cout << ". hah got it bitch";
					cout << endl;
			}


			// for (int k = 0; k<10; k++) { //check sum against every term in the array
			// 	target = arr[k];
			// 	if (sum == target) {
			// 		cout << arr[i] << " + "<< arr[j] << " is equal to ";
			// 		cout << sum;
			// 		cout << ". hah got it bitch";
			// 		cout << endl;
			// 	}
			// }
		}
	}
}


