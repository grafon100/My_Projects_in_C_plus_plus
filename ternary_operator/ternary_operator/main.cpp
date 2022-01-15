//
//  main.cpp
//  ternary_operator
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
    cout<<"Input a: ";
    cin>>a;
    
    a<10? cout<<a<<"<10;\n" : (a>10? cout<<a<<">10;\n" : cout<<a<<"=10;\n");


    return 0;
}
