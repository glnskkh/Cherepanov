#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const char filename[] = "matrix.txt";

  ifstream file(filename);

  if (!file) {
    cerr << "Error while opening!";
    return -1;
  }

  int n, m;

  file >> n >> m;

  int matrix[n][m];

  int index = 0;
  while (!file.eof()) {
    string s;

    file >> s;

    int scalar = stoi(s);

    *(matrix[0] + index++) = scalar;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  file.close();
}