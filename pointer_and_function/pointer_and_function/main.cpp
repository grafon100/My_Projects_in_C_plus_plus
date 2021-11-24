//
//  main.cpp
//  pointer_and_function
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

void func(int *a){
    (*a)++;
}

int main(int argc, const char * argv[]) {
    int x = 5;
    cout<<x<<endl;
    func(&x);
    cout<<x<<endl;
    
    
    return 0;
}
