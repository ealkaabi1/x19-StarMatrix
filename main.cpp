#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<char>> matrix;
  int rows, columns;

  cout << "Enters rows and columns of stars:" << endl;
  cin >> rows >> columns;

  if (rows > 0 && columns > 0) {
    matrix.resize(rows);
    
    for (int i = 0; i < rows; i++) {
      matrix[i].resize(columns);

      for (int j = 0; j < columns; j++)
        matrix[i][j] = '*';
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++)
        cout << matrix[i][j];
      cout << endl;
    }
  }

  return 0;
}
