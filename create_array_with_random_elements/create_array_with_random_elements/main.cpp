//
//  main.cpp
//  create_array_with_random_elements
//
//  Created by grafon100 on 21/11/2021.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    const int ARRAY_SIZE = 10;
    
    int array[ARRAY_SIZE];
    int sameValue;
    
    for(int i = 0; i < ARRAY_SIZE; ){
        sameValue = false;
        int randElement = rand()%20;
        for(int j = 0; j < i; j++)
            if(randElement == array[j]){
                sameValue = true;
                break;
            }
        
        if(!sameValue){
            array[i] = randElement;
            i++;
        }
    }
    
    
    
    
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}


