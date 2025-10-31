#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIdx) {
     vector<vector<int>> triangle;
     for(int rowIndex = 0; rowIndex <= rowIdx ; rowIndex++) {
        vector<int> currentRow(rowIndex + 1,1);
        for(int colIndex = 1 ; colIndex < rowIndex ; colIndex++) {
         currentRow[colIndex] = triangle[rowIndex -1][colIndex-1] + triangle[rowIndex-1][colIndex];
        }

        triangle.push_back(currentRow);
     }
     return triangle[rowIdx];
    }

    void printRow(vector<int>& row) {
        cout<<"[";
        for(int num : row) {
            cout<<num<<" ";
        }
        cout<<"]\n";
    }
};

int main() {
    Solution sltn;
    vector<int> row = sltn.getRow(4) ;
    sltn.printRow(row);
}