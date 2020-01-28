//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float mean = 0;
    float sd = 0;
    ifstream source("score.txt");
    string text;
    
    while (getline(source,text)){
        cout << text << "\n";
        mean += atof(text.c_str());
        sd += pow(atof(text.c_str()),2);
        count++;
    }
    mean = mean/count;
    sd = sqrt((sd/count)-pow(mean,2));
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd << "\n";

}