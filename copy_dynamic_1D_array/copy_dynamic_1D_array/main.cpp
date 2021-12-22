//
//  main.cpp
//  copy_dynamic_1D_array
//
//  Created by grafon100 on 22/12/2021.
//

#include <iostream>
#include <time.h>
#include <iomanip>


using namespace std;

void fillArr(int *arr, int size){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%10;
    }
}

void outPutArr(int *arr, int size){
    for (int i = 0; i<size; i++) {
        cout<<setw(3)<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int size;
    cout<<"Input size: ";
    cin>>size;
    
    int *arr1 = new int [size];
    int *arr2 = new int [size];
    
    fillArr(arr1, size);
    fillArr(arr2, size);
    
    cout<<"First array:  ";
    outPutArr(arr1, size);
    cout<<"Second array: ";
    outPutArr(arr2, size);
    
    delete [] arr1;
    
    arr1 = new int [size];
    
    for(int i = 0; i<size; i++){
        arr1[i] = arr2[i];
    }
    
    cout<<"=======================\n";
    
    cout<<"First array:  ";
    outPutArr(arr1, size);
    cout<<"Second array: ";
    outPutArr(arr2, size);
    
    delete [] arr1;
    delete [] arr2;
    
    return 0;
}
