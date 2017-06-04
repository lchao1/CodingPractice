#include<iostream>
using namespace std;

bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }
    
    //start=0, end=2, middle = 1
    //midval = 2

    //start=0, end=0, middle = 0
    //midval = 1

    int start = 0, end = n-1, middle;
    while (end - start>=0) 
    {
        middle = (start + end)/2;
        //printf("\n%i\n", middle);
        
        if (values[middle] == value)
        {
            return true;
        }
        else if (value > values[middle])
        {
            start = middle + 1;
        }
        else if (value < values[middle])
        {
            end = middle - 1; 
        }
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3};

    printf("%d\n", search(1, arr, 3));

    printf("%d\n", search(2, arr, 3));

    printf("%d\n", search(3, arr, 3));

}