//
//  main.cpp
//  work_with_fstream
//
//  Created by grafon100 on 19/01/2022.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string path = "myData.txt";
    
    fstream fout;
    
    fout.open(path,ofstream::app);
    
    if(!fout.is_open()){
        cout<<"Erro open this file";
    } else {
        
        
        for(int i = 0; i<5; i++){
            int num;
            cout<<"Input your number: ";
            cin>>num;
            fout << i+1 <<") num = "<< num <<endl;
            
            
        }
        
    }
    
    fout.close();


    return 0;
}
