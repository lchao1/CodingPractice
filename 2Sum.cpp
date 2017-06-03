#include <iostream>
using namespace std;

	/*
	 * 2-Sum: Given a sorted array, write a program to decide 
	 * if two elements sum up to a third. You may assume that each input would 
	 * have exactly one solution, and you may not use the same element twice.
	 */


int main(void) {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target = 18;
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


