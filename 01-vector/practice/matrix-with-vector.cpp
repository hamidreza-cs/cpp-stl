#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // * ماتریس 3x3
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    // * 1. Print
    cout << "Matrix:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // * 2. Sum of all elements
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += matrix[i][j];
        }
    }
    cout << "Sum: " << sum << endl;

    // * 3. Max element
    int maxVal = matrix[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] > maxVal){
                maxVal = matrix[i][j];
            }
        }
    }
    cout << "Max: " << maxVal << endl;

    // * 4. Row sums
    cout << "Row sums: ";
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < cols; j++){
            rowSum += matrix[i][j];
        }
        cout << rowSum << " ";
    }
    cout << endl;

    // * 5. Transpose
    vector<vector<int>> transposed(cols, vector<int>(rows));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transposed[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed:" << endl;
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}