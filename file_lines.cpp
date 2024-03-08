#include <iostream>
#include <fstream>

#include "file_lines.h"

using namespace std;

int file_lines(string file_name){
  int number_of_lines = 0;
  string line;
  ifstream file(file_name);
  if(file.is_open()){
    while(getline(file,line)){
      ++number_of_lines;
    }
  file.close();
   }
    return number_of_lines;

}
