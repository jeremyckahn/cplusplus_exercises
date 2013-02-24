#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
  ifstream file;
  string line;

  file.open("fileread.cpp");

  if (file.is_open()) {
    while (file.good()) {
      getline(file, line);
      cout << line << endl;
    }
     file.close();
  } else {
    cout << "Wuh-oh!  Couldn't open the file!";
    return 1;
  }

  return 0;
}
