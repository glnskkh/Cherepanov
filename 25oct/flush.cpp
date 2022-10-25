#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const char filename[] = "hello1.txt";

  ofstream file(filename);

  if (!file) {
    cerr << "Error while opening!";
    return -1;
  }

  file << "Hello, world!" << endl; // Implicit file.flush;
  file << "Hello"
       << "\n";

  file.flush();

  file.close();
}