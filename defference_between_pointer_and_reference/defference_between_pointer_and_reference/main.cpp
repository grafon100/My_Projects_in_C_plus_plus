//
//  main.cpp
//  defference_between_pointer_and_reference
//
//  Created by grafon100 on 24/11/2021.
//


#include <iostream>
using namespace std;

void func1(int a){
    a = 1;
}

void func2(int &refA){
    refA = 2;
}

void func3(int *pA){
    *pA = 3;
}



int main(int argc, const char * argv[]) {
    int a = 0;
    cout<<"A = "<<a<<endl;
    func1(a);
    cout<<"After func1: ";
    cout<<"A = "<<a<<endl;
    
    func2(a);
    cout<<"After func2: ";
    cout<<"A = "<<a<<endl;
    
    func3(&a);
    cout<<"After func3: ";
    cout<<"A = "<<a<<endl;
    
    
    return 0;
}
