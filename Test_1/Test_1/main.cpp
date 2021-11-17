//
//  main.cpp
//  Test_1
//
//  Created by grafon100 on 17/11/2021.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int a, b, c, resultSum, resultMult;
    double resultSr;
    cout<<"input a: ";
    cin>>a;
    cout<<"input b: ";
    cin>>b;
    cout<<"input c: ";
    cin>>c;
    
    resultSum = a + b + c;
    cout<<"result: "<< a <<"+"<< b <<"+"<< c <<" = "<<resultSum<<endl;
    
    resultMult = a * b * c;
    cout<<"result: "<< a <<"*"<< b <<"*"<< c <<" = "<<resultMult<<endl;
    
    resultSr = double(a + b + c)/3;
    cout<<"result SR: "<< a <<","<< b <<","<< c <<"="<<resultSr<<endl;
    
    
  
    return 0;
}
