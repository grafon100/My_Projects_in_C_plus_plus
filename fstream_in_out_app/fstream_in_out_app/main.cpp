//
//  main.cpp
//  fstream_in_out_app
//
//  Created by grafon100 on 22/01/2022.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Point{
public:
    Point(){
        x = y = z = 0;
    }
    
    Point(int x, int y, int z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
        
    }
    
    int x;
    int y;
    int z;
    
    
    void printPoint(){
        cout<<"X:"<<x<<"; Y:"<<y<<"; Z:"<<z<<endl;
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    
    string path = "myPoints.txt";
    int value;
    
    
    fstream inputData;
    
    inputData.open(path, fstream::in | fstream::out | fstream::app);
    
    if(!inputData.is_open()){
        cout<<"File wasn't opened\n";
        
    } else {
        cout<<"File was opened\n";
        cout<<"==================\n";
        cout<<"Putin 1 for save massage in file\n";
        cout<<"Putin 2 for load all massage with file\n";
        
        cin>>value;
        string msg;
        if(value == 1){
            cout<<"Write massage: ";
            cin>>msg;
            inputData<<msg;
            
        }
        
        if(value == 2){
            
            while(!inputData.eof()){
                string str = "";
                getline(inputData,str);
                cout<<str<<endl;
            }
            
//            while(!fs.eof()){
//
//                getline(fs, msg);
//                cout<<msg<<endl;
//
//            }
            
        }
        
    }
   
    
    
    
    inputData.close();
    
    
    
    
    return 0;
}
