//James Obrador
#include<iostream>
#include <fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream f("sample.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout <<abs(hashmat-opponent)<<endl;      
    }
    
    //fclose(f);
    system("pause");
    return 0;
}   
