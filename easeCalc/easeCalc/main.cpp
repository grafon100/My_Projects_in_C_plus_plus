//
//  main.cpp
//  easeCalc
//
//  Created by grafon100 on 17/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    char typeOp;
    bool tryAgain = false;
    char again;
    
    do{
        
        cout<<"=========================="<<endl;
        cout<<"Welcom to easy calculator!"<<endl;
        cout<<"=========================="<<endl;
        cout<<"Input first number ";
        cin>>a;
        
        cout<<"Input type operation (+, -, *, /): ";
        cin>>typeOp;
        
        cout<<"Input second number ";
        cin>>b;
        
        switch (typeOp){
            case '+':
                cout<<a<<"+"<<b<<"="<<a+b<<endl;
                break;
            case '-':
                cout<<a<<"-"<<b<<"="<<a-b<<endl;
                break;
            case '*':
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
                break;
                
            case '/':
                if(b != 0){
                    cout<<a<<"/"<<b<<"="<<double(a)/b<<endl;
                } else {
                    cout<<"cannot be divisible by 0!"<<endl;
                }
                break;
            default:
                cout<<"You input incorrect operation symbol!"<<endl;
        }
        
        while(true){
            cout<<"Try again? Y/N ? ";
            cin>>again;
            if (again == 'Y' || again == 'y'){
                tryAgain = true;
                break;
            } else if (again == 'N' || again == 'n') {
                tryAgain = false;
                break;
            } else {
                cout<<"You input incorrect operation symbol!"<<endl;
            }
        }
        cout<<endl;
    } while (tryAgain);
    
    
    return 0;
}
