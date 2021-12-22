//
//  main.cpp
//  copy_dynamic_array
//
//  Created by grafon100 on 22/12/2021.
//

#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


int **createArr(const int row, const int col){
    int **arr = new int *[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int [col];
    }
    return arr;
}

void delArr(int **arr, const int row){
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }
    delete [] arr;
}



void fillArr(int **arr, const int row, const int col){
    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++) {
            arr[i][j] = rand()%10;
        }
    }
}

void outPutArr(int **arr, const int row, const int  col){
    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++) {
            cout<<setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int rows, cols;
    cout<<"Input rows: ";
    cin>>rows;
    cout<<"Input cols: ";
    cin>>cols;
    
    int **myArr = createArr(rows, cols);
    
    fillArr(myArr, rows, cols);
    outPutArr(myArr, rows, cols);
    
    
    delArr(myArr, rows);
    
    
   
    return 0;
}
