//
//  main.cpp
//  work_with_func_and_dynamic_arr
//
//  Created by grafon100 on 01/12/2021.
//

#include <iostream>
#include <time.h>

using namespace std;


void fillArr(int * arr, int size){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%10;
    }
}

void showArr(int * arr, int size){
    for(int i = 0; i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int size;
    cin>>size;
    int *arr = new int[size];
    
    fillArr(arr, size);
    
    showArr(arr, size);
    
    
    return 0;
}
