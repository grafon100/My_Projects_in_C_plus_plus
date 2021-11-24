//
//  main.cpp
//  hw_swap_ref_tamplate
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

template <typename T>
void swapRef(T &aRef, T &bRef){
    T temp = aRef;
    aRef = bRef;
    bRef = temp;
}

int main(int argc, const char * argv[]) {
    int a = 10, b = -11;
    
    cout<<"A="<<a<<", B="<<b<<endl;
    
    swapRef(a, b);
    cout<<"After swap\n";
    cout<<"A="<<a<<", B="<<b<<endl;
    
    
    return 0;
}
