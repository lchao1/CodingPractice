#include <iostream>

using namespace std;

int main() {
    string inputStr;
    cout << "Input:\n";
    cin >> inputStr;

    int arrSize = inputStr.length(); //n = strlen(string)

    char arr[arrSize];
    cout << "\nLength: " << arrSize << endl; 

    for (int i = 0; i < arrSize; i++) {
        cout << "[" << i << "]: " << inputStr[i] << endl;
        arr[i] = inputStr[i];
    }
    cout << endl;

    cout << "Output:\n" << arr << endl;
}