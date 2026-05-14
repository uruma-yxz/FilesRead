#include <iostream>
#include <fstream>
using namespace std;

void whireFiles(string arquivo,string Contxt){
    ofstream files;
    files.open(arquivo);
    files << Contxt;
    files.close();
}

void ReadFiles(string arquivo){
    ifstream file;
    string linhas;
    file.open(arquivo);
    while(getline(file,linhas)){
        cout<<linhas<<endl;
    }
}

int main(){
    string file = "kali.txt";
    string texto = "";
    whireFiles(file,texto);
    ReadFiles(file);
    return 0;
}