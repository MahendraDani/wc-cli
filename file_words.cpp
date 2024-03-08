#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

int file_words(string file_name){
  ifstream file(file_name);
  int word_count = 0;

  if(file.is_open()){
    string line;
    while(getline(file,line)){
      stringstream ss(line);
      string word;

      while(ss >> word){
        word_count++;
      }
    }
    file.close();
  }
  return word_count;
}

