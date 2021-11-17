//
//  main.cpp
//  EvenOdd
//
//  Created by grafon100 on 17/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"Input your number"<<endl;
    cin>>n;
    
    if(n%2==0){
        cout<<"Your number's even"<<endl;
    } else {
        cout<<"Your number's odd"<<endl;
    }
    
    
    return 0;
}
