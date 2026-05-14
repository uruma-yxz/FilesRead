#pragma once
#include <iostream>
#include <fstream>
#include "../Input/nameFiles.cpp"
#include "../useCase/ReadFiles.cpp"
#include "../useCase/whireFiles.cpp"
using namespace std;

class Home {
    private:
        NameFiles name;
        ReadFiles read;
        WhireFiles whire;
    
    public:
    void execute(){
        string nameFiles = name.nameFls();
        string texto = "";
        whire.whireFiles(nameFiles,texto);
        read.ReadFile(nameFiles);
    }
};