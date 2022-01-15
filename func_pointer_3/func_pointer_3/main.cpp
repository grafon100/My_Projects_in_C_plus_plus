//
//  main.cpp
//  func_pointer_3
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}

int sub(int a, int b){
    return a-b;
}






int main(int argc, const char * argv[]) {
    int a,b;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input a: ";
    cin>>b;
    
    int (*matDoIt)(int a, int b);
    
    matDoIt = sum;
    cout<<a<<"+"<<b<<"="<<matDoIt(a, b)<<endl;
    
    matDoIt = mult;
    cout<<a<<"*"<<b<<"="<<matDoIt(a, b)<<endl;
    
    matDoIt = sub;
    cout<<a<<"-"<<b<<"="<<matDoIt(a, b)<<endl;
    
    
    return 0;
}
