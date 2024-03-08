#include<fstream>
#include "file_char.h"
using namespace std;

int file_char(string file_name){
  ifstream file(file_name);
  int char_count = 0;

  if(file.is_open()){
    char character;
    while(file >> character){
      char_count++;
    }
    file.close();
  }
  return char_count;
}
