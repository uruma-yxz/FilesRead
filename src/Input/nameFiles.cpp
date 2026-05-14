#pragma once
#include <iostream>
using namespace std;

class NameFiles {
    private:

    public:
        string nameFls(){
            string nameFiles;
            cout << "Name File: ",cin >> nameFiles;
            return nameFiles;
    }
};