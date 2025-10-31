#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> triangle;
     for(int rowIndex = 0; rowIndex < numRows ; rowIndex++) {
        vector<int> currentRow(rowIndex + 1,1);
        for(int colIndex = 1 ; colIndex < rowIndex ; colIndex++) {
         currentRow[colIndex] = triangle[rowIndex -1][colIndex-1] + triangle[rowIndex-1][colIndex];
        }

        triangle.push_back(currentRow);
     }
     return triangle;
    }

    void printTriangle(const vector<vector<int>>& triangle) {
        for (const auto& row : triangle) {
            for (int value : row) {
                cout << value << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows = 5;
    Solution sltn;
    vector<vector<int>> triangle = sltn.generate(numRows);

   cout<< "Pascal's Triangle With "<<numRows<<" rows \n";
   sltn.printTriangle(triangle);


}