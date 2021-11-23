//
//  main.cpp
//  template_example
//
//  Created by grafon100 on 22/11/2021.
//

#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b){
    return a + b;
}

int main(int argc, const char * argv[]) {
    int firstInt = 5, secondInt = 4;
    double firstDouble = 3.03, secondDouble = 2.02;
    
    cout<<sum(firstInt, secondInt)<<endl;
    cout<<sum(firstDouble, secondDouble)<<endl;
    return 0;
}
