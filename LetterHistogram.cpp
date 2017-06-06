#include <iostream>
#include <map>
using namespace std;


/*  simple problem for map:
	create a histogram for a string
	map == hash table == dictionary
	input: aabcd
	output:
	a = 2
	b = 1
	c = 1
	d = 1
*/

int main (void) {

	string input = "banana";
	cout << input << endl; 
	int len = input.length();

	map <char, int> histogram;
	for (int i = 0; i<len; i++) {
		histogram[input[i]] += 1; //if you print 'histogram[key]' you get the value of the key
	}

	for(map<char, int>::const_iterator it = histogram.begin(); it != histogram.end(); ++it) {
    	cout << it->first << ": " << it->second << "\n";
	}
}
