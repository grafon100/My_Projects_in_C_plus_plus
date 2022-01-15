//
//  main.cpp
//  preprocessor
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
#define PI 3.14
//better didn't use #define begin {, #define end }
//this code for fun
#define begin {
#define end }


using namespace std;

int main(int argc, const char * argv[]) {
    for(int i = 0; i<5; i++)
    begin
        
        double result = PI + i;
        cout<<i+1<<") ";
        cout<<PI<<"+"<<i<<"="<<result<<endl;
        
    end
    
    return 0;
}
