#include <fstream>
#include <iostream>

using namespace std;

int main() {
  string filename = "binary.txt";

  ofstream file(filename, ios::binary);

  int i = 4;

  file.write((char *)&i, sizeof(i));

  file.close();

  // На экзамене: файл - внешний ресурс, простые операции и концепции.
  // Чем отличаются С и С++ подходы
}