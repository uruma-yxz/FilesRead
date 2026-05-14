#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class ReadFiles {
    private:

    public:
        void ReadFile(string arquivo){
            ifstream file;
            string linhas;
            file.open(arquivo);
            while(getline(file,linhas)){
                cout<<linhas<<endl;
        }
    }
};