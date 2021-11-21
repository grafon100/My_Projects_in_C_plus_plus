//
//  main.cpp
//  smaller_namber
//
//  Created by grafon100 on 21/11/2021.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    const int SIZE = 10;
    bool sameNumber;
    int randomNumber;
    
    int array[SIZE];
    
    for(int i = 0; i < SIZE; ){
        sameNumber = false;
        randomNumber = rand()%20;
        
        for(int j = 0; j<i; j++){
            if (array[j] == randomNumber){
            sameNumber = true;
            break;
            }
        }
        
        if(!sameNumber){
            array[i] = randomNumber;
            i++;
        }
    }
    
    for(int i = 0; i < SIZE; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    int minNumber = array[0];
    for(int i = 0; i < SIZE; i++){
        if(minNumber > array[i]){
            minNumber = array[i];
        }
    }
    cout<<minNumber<<endl;
    
    
    return 0;
}
