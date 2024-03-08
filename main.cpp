#include <iostream>
#include <fstream>
#include <iomanip>

#include "file_size.cpp"
#include "file_lines.cpp"
#include "file_words.cpp"
#include "file_char.cpp"

using namespace std;


int main(int argc, char **argv) {
    string options[] = {"-c","-l","-w","-m"};
    if(argc == 3){
        string ioption(argv[1]);
        int ioptionc = -1;
        for(int i=0;i<4;i++){
          if(argv[1]==options[i]){
            ioptionc = i;
            break;
          }
        }
        
        if(ioptionc == -1){
          cout << "Error: Please enter a valid option\n";
          cout << "-c: " << "To obtain file size\n";
          cout << "-l: " << "To obtain number of lines in a file\n";
          cout << "-w: " << "To obtain number of words in a file\n";
          cout << "-m: " << "To obtain number of characters in a file\n";
          return 1;
        }

        ifstream file(argv[2]); 
        if(file.fail()){
          cout << "Error: File not found, please enter a valid file name\n";
          return 1;
        }
        switch (ioptionc) {
          case 0:
            cout << "Size of the file " << argv[2] << " is: " << file_size(argv[2]) << "\n";
            break;
          case 1:
            cout << "Number of lines in the file " << argv[2] << " is: " << file_lines(argv[2]) << "\n";
            break;
          case 2:
            cout << "Number of words in the file " << argv[2] << " is: " << file_words(argv[2]) << "\n";
            break;
          case 3:
            cout << "Number of characters in the file " << argv[2] << " is: " << file_char(argv[2]) << "\n";
            break;
        }

       
    }else if(argc == 2){
        string ifile_name(argv[1]);

        if(ifile_name=="help"){
          cout << "\nwc-cli helps you to obtain details about any file!\n";

          cout << "\n";

          cout << "[Options]\n";
          cout << "-c\tTo obtain size of the file\n";
          cout << "-l\tTo obtaing total number of lines in the file\n";
          cout << "-w\tTo obtain total number of words in the file\n";
          cout << "-m\tTo obtain total number of characters in the file\n";

          cout << "\n";

          cout << "Example command\n";
          cout << "./wc -l <path_of_file>\n";
          cout << "\n";
        }else{
          ifstream file(ifile_name); 
          if(file.fail()){
            cout << "Error: File not found, please enter a valid file name\n";
            return 1;
          }

          cout << "File: " << ifile_name << "\n";
          cout << "Size: " << file_size(ifile_name) << " bytes\n";
          cout << "Lines: " << file_lines(ifile_name) << "\n";
          cout << "Words: " << file_words(ifile_name) << "\n";
          cout << "Characters: " << file_char(ifile_name) << "\n";
        }
    }
    return 0;
}
