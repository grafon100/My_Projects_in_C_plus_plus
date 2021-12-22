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
    
    int **myArr1 = createArr(rows, cols);
    int **myArr2 = createArr(rows, cols);
    
    fillArr(myArr1, rows, cols);
    fillArr(myArr2, rows, cols);
    
    cout<<"First array:\n";
    outPutArr(myArr1, rows, cols);
    cout<<"Second array:\n";
    outPutArr(myArr2, rows, cols);
    
    delArr(myArr1, rows);
    
    myArr1 = createArr(rows, cols);
    
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            myArr1[i][j] = myArr2[i][j];
        }
    }
    
    
    cout<<"=========================\n";
    
    cout<<"First array:\n";
    outPutArr(myArr1, rows, cols);
    cout<<"Second array:\n";
    outPutArr(myArr2, rows, cols);
    
    
    delArr(myArr1, rows);
    delArr(myArr2, rows);
    
    
   
    return 0;
}
