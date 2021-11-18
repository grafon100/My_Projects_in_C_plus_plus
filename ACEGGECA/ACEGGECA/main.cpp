//
//  main.cpp
//  ACEGGECA
//
//  Created by grafon100 on 18/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h, w;
    char symbol;
    cout<<"Input your Symbol: ";
    cin>>symbol;
    cout<<"Input your H: ";
    cin>>h;
    cout<<"Input your W: ";
    cin>>w;
    
    
    
    
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cout<<symbol;
        }
        cout<<endl;
    }
    
    
    for(int i = 0; i<h; i++){
        for(int j = 0; j<i; j++){
            cout<<symbol;
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}
