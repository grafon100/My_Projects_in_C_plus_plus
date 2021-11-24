//
//  main.cpp
//  poiter
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 5;
    cout<<"a ="<<a<<endl;
    int *px = &a;
    
    int *px2 = &a;
    
    cout<<"px =\t"<<px<<endl;
    cout<<"px2 =\t"<<px2<<endl;
    
    *px2 = 2;
    cout<<"a ="<<a<<endl;
    
   
    
    
    
    
    
    return 0;
}
