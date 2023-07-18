/*
<aside>
💡 **Question 3**
Given a 2D integer array matrix, return *the **transpose** of* matrix.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

**Example 1:**

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output: [[1,4,7],[2,5,8],[3,6,9]]

</aside>
*/
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transposeMatrix(const vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int columns = matrix[0].size();

    vector<vector<int>> transposedMatrix(columns, vector<int>(rows));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    return transposedMatrix;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<vector<int>> transposedMatrix = transposeMatrix(matrix);

    for (const auto &row : transposedMatrix)
    {
        for (const auto &num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
