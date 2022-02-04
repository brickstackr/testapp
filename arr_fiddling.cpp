// my_class.cpp
#include "my_class.h" // header in local directory
#include "array_fiddling.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
using namespace N;

int N::arr_doodle::arr_fiddling(){
    ofstream out("output.txt", ios::binary);
    ifstream in("faketext.txt", ios::binary);

    vector<ios::pos_type> pos;
    pos.push_back(0);

    string line;
    while (getline(in, line))
        pos.push_back(in.tellg());

    size_t i = pos.size();
    if (i-- > 0)
        while (i-- > 0) {
            in.clear();
            in.seekg(pos[i]);
            getline(in, line);
            out << line << '\n';
        }
}