//
//  main.cpp
//  refererences
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 5;
    
    int *pa = &a;
    int &aRef = a;
    
    cout<<"*pa =\t"<<*pa<<endl;
    cout<<"&aRef =\t"<<aRef<<endl;
    
    return 0;
}
