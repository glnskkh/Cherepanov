#include <fstream>
#include <iostream>

using namespace std;

#define MAX_BUF 64

int main() {
  const char filename[] = "numbers.txt";

  ifstream file(filename);

  if (!file) {
    cerr << "Error while opening!";
    return -1;
  }

  char buffer[MAX_BUF];
  while (!file.eof()) {
    string word;

    file >> word;

    cout << word;
  }

  file.close();
}