//
//  main.cpp
//  return_several_elements_with_reference
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>

using namespace std;

void funcABC(int &aRef, int &bRef, int &cRef){
    aRef += 10;
    bRef *= 2;
    cRef -= 100;
}


int main(int argc, const char * argv[]) {
    int a = 1, b = 2, c = 3;
    cout<<"A = "<< a <<endl;
    cout<<"B = "<< b <<endl;
    cout<<"C = "<< c <<endl;
    
    funcABC(a, b, c);
    cout<<"After function call"<<endl;
    cout<<"A = "<< a <<endl;
    cout<<"B = "<< b <<endl;
    cout<<"C = "<< c <<endl;
    
    
    
    return 0;
}
