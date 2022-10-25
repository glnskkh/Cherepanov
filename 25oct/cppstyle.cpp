#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const char filename[] = "new.txt";

  FILE *file = fopen(filename, "r");

  if (file == NULL) {
    cerr << "Error reading file";
    return -1;
  }

  char buffer[50];
  while (fgets(buffer, 50, file))
    cout << buffer;

  fclose(file);
}