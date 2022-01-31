// my_class.cpp
#include "my_class.h" // header in local directory
#include "array_fiddling.h"
#include <iostream> // header in standard library
#include <fstream>
#include <string>
#include <vector>

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::vector;

int N::arr_doodle::arr_fiddling() {
    std::string s; //string
    std::fstream f; //file stream
    f.open("faketext.txt"); //open your word list
    std::getline(f, s); //get line from f (your word list) and put it in s (the string)
    std::cout << s << "\n"; //output string
    return 0;
}