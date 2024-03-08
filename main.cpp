#include <iostream>
#include "file_size.cpp"
#include <cstring>
using namespace std;

int main(int argc, char **argv) {
    string options[] = {"-c","-l","-w","-m"};
    if(argc == 3){
        string ioption(argv[1]);
        if(ioption==options[0]){
        int size = file_size(argv[2]);
        cout << "Size of the file is: " << size << "\n";
        }else{
          cout << "incorrect option";
        }
       
    }else{
      cout << "At least three words required";
    }
    return 0;
}
