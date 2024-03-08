#include <iostream>

#include "file_size.cpp"
#include "file_lines.cpp"
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
          cout << "Please enter a valid option\n";
          cout << "-c: " << "To obtain file size\n";
          cout << "-l: " << "To obtain number of lines in a file\n";
          cout << "-w: " << "To obtain number of words in a file\n";
          cout << "-m: " << "To obtain number of characters in a file\n";
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
            cout << "Return number of words in the file";
            break;
          case 3:
            cout << "Return number of characters in a file";
            break;
        }

       // if(ioption==options[0]){
        //  int size = file_size(argv[2]);
         // cout << "Size of the file is: " << size << "\n";
        //}else{
         // cout << "incorrect option";
        //}
       
    }else{
      cout << "At least three words required";
    }
    return 0;
}
