//
//  main.cpp
//  function_pointer
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
using namespace std;
int plusOne(int a){
    return a+1;
}

int multOnTwo(int a){
    return a*2;
}


int main(int argc, const char * argv[]) {
    
    int (*funcPointer)(int a);
    
    funcPointer = plusOne;
    cout<<funcPointer(4)<<endl;
    
    cout<<"-------------------\n";
    funcPointer = multOnTwo;
    cout<<funcPointer(4)<<endl;
    
    
    
    
    
    return 0;
}
