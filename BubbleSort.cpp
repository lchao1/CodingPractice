#include<iostream>
using namespace std;

void printMyShit(int value[], int size) {
	for (int i = 0; i < size; i++) {
		cout << value[i] << " ";
	}
	cout << "\n";
}

void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm (bubble)
    
    for (int j=0; j<n-1; j++) //sort through n-1 times, each time putting largest number at end
    {
        for (int i=0; i<n-1-j; i++) //sort through array once
        {
            if(values[i]>values[i+1])
            {
                int temp = values[i+1];
                values[i+1] = values[i];
                values[i] = temp;
            }
        }
        printMyShit(values, n);
    }
    return;
}

int main(void)
{
	int arr[] = {5,4,3,2,1};
	sort(arr, 5);

}
