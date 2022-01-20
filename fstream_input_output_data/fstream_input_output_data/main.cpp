//
//  main.cpp
//  fstream_input_output_data
//
//  Created by grafon100 on 20/01/2022.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //fstream
    //ofstream
    //ifstream


    ifstream inputData;
    
    string myPath = "myFile.txt";
    
    
    
    inputData.open(myPath);
    
    
    
    if(!inputData.is_open()){
        cout<<"Error!!! MyFile didn't opened!\n";
    } else {
        
        cout<<"MyFile.txt was opened\n";
        cout<<"=====================\n";
        
        
        while(!inputData.eof()){
            string str = "";
            getline(inputData,str);
            cout<<str<<endl;
        }
        
    }
    
//    ofstream outputData;
//    outputData.open(myPath);
    
//    if(!outputData.is_open()){
//        cout<<"Error!!! MyFile didn't opened!\n";
//    } else {
//        for(int i = 0; i<5; i++){
//            int num;
//            cout<<"Input your num: ";
//            cin>>num;
//            outputData<<num<<endl;
//        }
//    }
//
//    outputData.close();
    
    
    
    
    
    
    
    return 0;
}
