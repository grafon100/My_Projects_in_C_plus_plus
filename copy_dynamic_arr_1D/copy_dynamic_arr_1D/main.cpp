//
//  main.cpp
//  copy_dynamic_arr_1D
//
//  Created by grafon100 on 06/01/2022.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int size;
    cout<<"Input size your array: ";
    cin>>size;
    
    int * arr1 = new int [size];
    int * arr2 = new int [size];
    
    for(int i = 0; i<size; i++){
        arr1[i] = rand()%10+1;
    }
    
    for(int i = 0; i<size; i++){
        arr2[i] = 0;
    }
    
    cout<<"Arr1: \n";
    for(int i = 0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Arr2: \n";
    for(int i = 0; i<size; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"\n--------------------\n";
    
    for(int i = 0; i<size; i++){
        arr2[i] = arr1[i];
    }
    
    cout<<"After copy arr2: \n";
    for(int i = 0; i<size; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"\n--------------------\n";
    
    
    
    
    delete [] arr1;
    delete [] arr2;
    return 0;
}
