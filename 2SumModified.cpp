#include <iostream>
using namespace std;

	/*
	 * 2-Sum: Given a sorted array, write a program to decide 
	 * if two elements sum up to a third element. 
	 * Print all combos of two elements that add up to a third
	 */


int main(void) {

	int arr[10] = {1, 3, 7, 10, 12, 17, 19, 23, 25, 30};
	int sum = 0; //sum of two terms
	int target = 0; //loop through array to check if sum = a term in the array

	for (int i=0; i<10; i++) {
		for (int j=0; j<9; j++) {
			if (j != i) {
				sum = arr[i] + arr[j]; //sum two terms
				for (int k = 0; k<10; k++) { //check sum against every term in the array
					target = arr[k];
					if (sum == target) {
						cout << arr[i] << " + "<< arr[j] << " is equal to ";
						cout << sum;
						cout << ". hah got it bitch";
						cout << endl;
					}
				}
			}
		}
	}
}


