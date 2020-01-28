//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main (){
    ifstream source;
    source.open("C:\\view\\lab9-2562-2-vVviewVv\\cheerbook.txt");
    string TT;
    ofstream s1("C:\\view\\lab9-2562-2-vVviewVv\\cheerbook_copy.txt");
    
    s1 << "“-------------------- SOTUS ---------------------”\n";
    while(getline(source,TT)){
        s1 << TT << "\n";
    }
    s1 << "“-------------------- SOTUS ---------------------”\n";
    source.close();
    return 0;
}
