//
//  main.cpp
//  cast_in_C
//
//  Created by grafon100 on 14/01/2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "ru");
    
    double a = 33.2;
    cout<<"a= "<<a<<endl;
    cout<<"a= "<<(int)a<<endl;
    cout<<"a= "<<(bool)a<<endl;
    cout<<"a= "<<(char)a<<endl;
    
    for(int i = 0; i<255; i++){
        cout<<"code = "<<i<<", char = "<<(char)i<<endl;
    }
    
    
    
    return 0;
}
