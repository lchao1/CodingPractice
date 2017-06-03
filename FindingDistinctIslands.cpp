#include <iostream>
using namespace std;

const int numWidth = 4;
const int numHeight = 4;

int countIslands(int[][numWidth]);
void discover(int[][numWidth], int, int);

int main() {

    /*
     * Given a 2D array of 1s and 0s, identify
     * the number of distinct islands in the array.
     *     Island = 1s
     *
     *     For example:
     *     {{1, 1, 0, 1},
     *      {0, 1, 0, 0},
     *      {0, 0, 0, 0},
     *      {0, 0, 0, 1}}
     *
     *     Number of islands will be 3
     */

    int land[numHeight][numWidth] = {
            {1, 1, 0, 1},
            {0, 1, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 1}
    };

    cout << "Input:\n";
    for (int i = 0; i < numHeight; i++) {
        for (int j = 0; j < numWidth; j++) {
            cout << land[i][j] << " ";
        }
        cout << endl;
    }

    int islands = countIslands(land);
    cout << "\nNumber of islands:\n" << islands << endl;
}

int countIslands(int land[][numWidth]) { 

    int number_of_islands = 0; 

    for (int i=0; i<numHeight; i++) {
        for (int j=0; j<numWidth; j++) {
            //check if 1
                //if 1
                    //change to 0
                    //check up, down, left, right
                        //recursion to check if 1
                //not 1, end check, increment for loop
            if (land[i][j] == 1) {
                land[i][j] = 0;

                // start checking up, down, left, right
                // if neighbor is also 1, then go to that one, and check neighbor again
                // this is when recursion is very helpful
                
                discover(land, i, j);
                number_of_islands += 1;
            }
        }
    }
    return number_of_islands;
}

// recursive function 'discover' - check up, down, left, right. if 1, go there
void discover(int land[][numWidth], int i, int j) {
    //down
    if(land[i+1][j] == 1 && i != numHeight) {
        land[i+1][j] = 0;
        discover(land, i+1, j);
    }
    //up
    if(land[i-1][j] == 1 && i > 0) {
        land[i-1][j] = 0;
        discover(land, i-1, j);
    }
    //right
    if(land[i][j+1] == 1 && j+1 < numWidth) {
        land[i][j+1] = 0;
        discover(land, i, j+1);
    }
    //left
    if(land[i][j-1] == 1 && j > 0) {
        land[i][j-1] = 0;
        discover(land, i, j-1);
    }
}