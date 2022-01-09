//
//  main.cpp
//  opp_access_modifiers
//
//  Created by grafon100 on 09/01/2022.
//

#include <iostream>
using namespace std;

class Point{

public:
    int x;
    int y;
    
    void print(){
        cout<<"x="<<x<<";\ny="<<y<<";\nz="<<z<<";\n";
        printF();
    }
    
private:
    int z;
    int f;
    
    void printF(){
        cout<<"Private method. printF();\n";
        cout<<"f="<<f<<";\n";
    }
    
};


int main(int argc, const char * argv[]) {
    
    Point a;
    a.print();
    //a.printF(); <=Protect;
    
    return 0;
}
