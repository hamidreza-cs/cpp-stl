#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // * 1. Creation
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // * 2. Access
    cout << "matrix[0][0]: " << matrix[0][0] << endl;
    cout << "matrix[1][2]: " << matrix[1][2] << endl;
    cout << "matrix[2][1]: " << matrix[2][1] << endl;

    // * 3. Size
    cout << "Rows: " << matrix.size() << endl;
    cout << "Cols: " << matrix[0].size() << endl;

    // * 4. Iterate
    cout << "Matrix:" << endl;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // * 5. Modify
    matrix[1][1] = 100;
    cout << "After modify: " << matrix[1][1] << endl;

    // * 6. Add row
    matrix.push_back({10, 11, 12});
    cout << "After add row, rows: " << matrix.size() << endl;

    // * 7. Range-based
    cout << "Range-based:" << endl;
    for(const auto& row : matrix){
        for(int x : row){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}