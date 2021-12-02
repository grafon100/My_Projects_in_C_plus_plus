//
//  main.cpp
//  arra_1d
//
//  Created by grafon100 on 02/12/2021.
//

#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


int main()
{
    srand(time(NULL));
    int size = 9;
    
    int *arr1D = new int[size];
    
    for(int i = 0; i < size; i++){
        arr1D[i] = rand() % 100 + 1;
    }
    
    
    for(int i = 0; i < size; i++){
        cout<<setw(3)<<arr1D[i]<<" ";
    }
    cout<<endl;

    delete [] arr1D;

    return 0;
}
