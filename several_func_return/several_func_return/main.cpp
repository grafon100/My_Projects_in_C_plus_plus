//
//  main.cpp
//  several_func_return
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

void changeABC(int *pa, int *pb, int *pc){
    (*pa) = 555;
    (*pb)--;
    (*pc) = -20;
    
    
    
}


int main(int argc, const char * argv[]) {
    int a = 0, b = 0, c = 0;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    
    changeABC(&a, &b, &c);
    cout<<"ABC after change:\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    
    
    return 0;
}
