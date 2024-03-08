#include<iostream>
#include<fstream>

#include "file_size.h"

using namespace std;

int file_size(string file_name){
 ifstream file(file_name);

  if (file.is_open()) {
    file.seekg(0, ios::end);
    int size = file.tellg();
    file.close();
    return size;

  } else {
    cout << "Error opening file." << endl;
    return 0;
  }
}
