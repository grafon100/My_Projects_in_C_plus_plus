//
//  main.cpp
//  dinamic_array
//
//  Created by grafon100 on 27/11/2021.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int size;
    cout<<"Enter size your array: ";
    cin>>size;
    
    int *myArray = new int[size];
    
    for (int i = 0; i<size; i++) {
        myArray[i] = rand()%10; // 0-9
    }
    
    for (int i = 0; i<size; i++) {
        cout<<myArray[i]<<'\t';
        cout<< myArray + i<<endl;
    }
    
    delete [] myArray;
   
    
    
    return 0;
}
 
