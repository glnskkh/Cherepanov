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

  fseek(file, 0, SEEK_END); // Move cursor

  auto size = ftell(file) - 1; // Size of buffer before cursor

  char ch;
  while (size >= 0) {
    fseek(file, size, SEEK_SET);

    ch = fgetc(file);

    // fseek(file, -1, SEEK_CUR);

    cout << ch;

    --size;
  }

  fclose(file);
}