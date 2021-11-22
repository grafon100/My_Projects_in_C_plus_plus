//
//  main.cpp
//  func_with_array
//
//  Created by grafon100 on 22/11/2021.
//

#include <iostream>
#include <time.h>

using namespace std;

void fillArray(int arr[], const int MY_SIZE){
    for (int i = 0; i < MY_SIZE; i++) {
        arr[i] = rand()%10+1; // 1...10
    }
}

void printArray(int arr[], const int MY_SIZE){
    for (int i = 0; i < MY_SIZE; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    fillArray(myArray, SIZE);
    printArray(myArray, SIZE);
    
    return 0;
}
