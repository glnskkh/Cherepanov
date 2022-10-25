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

  char buffer[BUF_MAX];
  while (fgets(buffer, BUF_MAX, file))
    cout << buffer;

  fclose(file);
}