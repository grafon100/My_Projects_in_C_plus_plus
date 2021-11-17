//
//  main.cpp
//  sumOddElement
//
//  Created by grafon100 on 17/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int first,last,sum = 0;
    cout<<"Input your first number: ";
    cin>>first;
    cout<<"Input your last number: ";
    cin>>last;
    
    while(first <= last){
        if (first % 2 != 0){
            sum += first;
        }
        first++;
    }
    
    cout<<"Summa odd elements equals: "<<sum<<endl;
    
    return 0;
}
