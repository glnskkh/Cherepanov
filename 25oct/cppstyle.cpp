#include <fstream>
#include <iostream>

using namespace std;

#define BUF_MAX 64

int main() {
  const char filename[] = "hello.txt";

  FILE *file = fopen(filename, "w");

  if (file == NULL) {
    cerr << "Error reading file";
    return -1;
  }

  char string[] = "Hello!!!\n";
  fputs(string, file);

  fclose(file);
}