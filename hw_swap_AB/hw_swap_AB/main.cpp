//
//  main.cpp
//  hw_swap_AB
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

void swapAB(int *pA, int *pB){
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    
}

int main(int argc, const char * argv[]) {
    int a, b;
    
    cout<<"Input A: ";
    cin>>a;
    cout<<"Input B: ";
    cin>>b;
    
    cout<<"a = "<<a<<", b = "<<b<<endl;
    
    swapAB(&a, &b);
    cout<<"After swap\n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    
    
    
    
    
    return 0;
}
