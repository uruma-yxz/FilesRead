#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class WhireFiles {
    private:

    public:
        void whireFiles(string arquivo,string Contxt){
            ofstream files;
            files.open(arquivo);
            files << Contxt;
            files.close();
    }
};