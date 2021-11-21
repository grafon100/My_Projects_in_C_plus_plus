//
//  main.cpp
//  random_elements
//
//  Created by grafon100 on 21/11/2021.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    //random value;
    int a = rand();
    cout<<"Random value"<<endl;
    cout<<a<<endl;

    
    //diapason 5 ..< 15;
    int b = rand()%10 + 5;
    cout<<"Random value in diapason 5..<15"<<endl;
    cout<<b<<endl;
    
    cout<<"Array with Random value in diapason 10..<18"<<endl;
    const int SIZE = 20;
    int array[SIZE];
    for(int i = 0; i < SIZE; i++){
        array[i] = rand()%18 + 10;
    }
    
    
    for(int i = 0; i < SIZE; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    
    
    
    
    return 0;
}
