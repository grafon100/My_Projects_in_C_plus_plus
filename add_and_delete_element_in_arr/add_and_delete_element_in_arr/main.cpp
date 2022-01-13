//
//  main.cpp
//  add_and_delete_element_in_arr
//
//  Created by grafon100 on 13/01/2022.
//

#include <iostream>
#include <time.h>
using namespace std;

int * newArr(int size){
    int *arr = new int [size];
    return arr;
}

void fillArr(int *arr, int size ){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%10+1;
    }
}

void outPut(int *arr, int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteArr(int *arr){
    delete [] arr;
}


void push_back(int *&arr, int &size, int value){
    int *newArr = new int [size+1];
    
    for(int i = 0; i<size; i++){
        newArr[i] = arr[i];
    }
    
    newArr[size] = value;
    size++;
    
    delete [] arr;
    arr = newArr;
}

void pop_back(int *&arr, int &size){
    size--;
    int * newArr = new int [size];
    for(int i = 0; i<size; i++){
        newArr[i] = arr[i];
    }
    
    delete arr;
    arr = newArr;
}


void push_up(int *&arr, int &size, int value){
    int *newArr = new int [size + 1];
    size++;
    for(int i = 0; i<size; i++){
        if(i != 0){
            newArr[i] = arr[i-1];
        } else {
            newArr[i] = value;
        }
    }
    
    delete [] arr;
    arr = newArr;
}

void pop_up(int *&arr, int &size){
    size--;
    int *newArr = new int [size];
    for(int i = 0; i<size; i++){
        newArr[i] = arr[i+1];
    }
    
    delete [] arr;
    arr = newArr;
}



int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int size, value;
    cout<<"Input size: ";
    cin>>size;
    int * myArr = newArr(size);
    fillArr(myArr, size);
    outPut(myArr, size);
    
    cout<<"Input value: ";
    cin>>value;
    
    
    push_back(myArr, size, value);
    outPut(myArr, size);
    
    cout<<"myArr after delete last element\n";
    pop_back(myArr, size);
    outPut(myArr, size);
    
    
    cout<<"Input value: ";
    cin>>value;
    
    push_up(myArr, size, value);
    outPut(myArr, size);
    
    cout<<"myArr after delete first element\n";
    pop_up(myArr, size);
    outPut(myArr, size);
    
    
    deleteArr(myArr);
    
    
    
    
    
    return 0;
}
