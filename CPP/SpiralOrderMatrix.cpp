// Code by Shwet Prakash (15 Sept 2023)
// In Spiral Order, matrix is traversed in clockwise manner from the peripheri to the center, like a maze.

#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(vector<vector<int>>& matrix) {
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Check if there are more rows and columns to print
        if (top <= bottom) {
            // Print bottom row
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            // Print left column
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Spiral Order Matrix: ";
    printSpiralMatrix(matrix);

    return 0;
}
