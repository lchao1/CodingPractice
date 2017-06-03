#include <iostream>
using namespace std;

	/*
	 * 2-Sum: Given a sorted array, write a program to decide 
	 * if two elements sum up to a third element. 
	 * Print all combos of two elements that add up to a third
	 */


int main(void) {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 0;

	for (int i=0; i<10; i++) {
		for (int j=0; j<9; j++) {
			if (j != i) {
				sum = arr[i] + arr[j];
			}
			if (sum == target) {
				cout << arr[i] << " + "<< arr[j] << " is equal to ";
				cout << sum;
				cout << ". hah got it bitch";
				cout << endl;
			}
		}
	}
}


