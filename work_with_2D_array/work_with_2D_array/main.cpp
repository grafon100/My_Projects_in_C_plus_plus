//
//  main.cpp
//  work_with_2D_array
//
//  Created by grafon100 on 27/11/2021.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    int rows = 4;
    int cols = 5;
    
    // create 2D dynamic array
    //1. create array
    int **myArr = new int *[rows];
    //2. create arrays
    for (int i = 0; i<rows; i++) {
        myArr[i] = new int[cols];
    }
   //------------------------stop create
    
    
    //fill in array---------------------
    
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<cols; j++) {
            myArr[i][j] = random()%20;
        }
    }
    //------------------------stop fill
    
    
    //out put array---------------------
    
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<cols; j++) {
            cout<<myArr[i][j]<<"\  t";
        }
        cout<<endl;
    }
    //------------------------stop out put
    
    
    
    
    //delete 2D dynamic array
    //1. delete arrays
    for (int i = 0; i < rows; i++) {
        delete [] myArr[i];
    }
    //2. delete array
    delete [] myArr;
    //------------------------stop delete
    
    
    
    return 0;
}
