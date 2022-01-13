//
//  main.cpp
//  OOP_incapsulation
//
//  Created by grafon100 on 13/01/2022.
//

#include <iostream>
using namespace std;

class CoffeeGrinder{
private:
    bool checkVoltage(){
        return true;
    }
public:
    void start(){
        if(checkVoltage()){
            cout<<"Wzzzzzz-zzz\n";
        } else {
            cout<<"Bip-bip-bip\n";
        }
        
    }
    
};

int main(int argc, const char * argv[]) {
    CoffeeGrinder a;
    a.start();
    return 0;
}
