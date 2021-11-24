//
//  main.cpp
//  array_and_pointer
//
//  Created by grafon100 on 24/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int SIZE = 5;
    int array[SIZE] = {3, 5, 7, 4, 11};
    
    for (int i = 0; i<SIZE; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"===========================\n";
    
    
    
    int *pArray = array;
    for (int i = 0; i<SIZE; i++) {
        cout<<pArray[i]<<" ";
    }
    cout<<endl;
    //equal
    for (int i = 0; i<SIZE; i++) {
        cout<<*(pArray+i)<<" ";
    }
    cout<<endl;
    
    cout<<"===========================\n";
    //array - it's adres first element;
    cout<<"array:\t"<<array<<endl;
    
    cout<<"pArray:\t"<<pArray<<endl;
    
    return 0;
}
