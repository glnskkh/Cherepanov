#include <fstream>
#include <iostream>

using namespace std;

#define BUF_MAX 64

int main() {
  const char filename[] = "new.txt";

  FILE *file = fopen(filename, "r");

  if (file == NULL) {
    cerr << "Error reading file";
    return -1;
  }

  char ch;
  while ((ch = fgetc(file)) != EOF) {
    cout << ch;
  }

  fclose(file);
}