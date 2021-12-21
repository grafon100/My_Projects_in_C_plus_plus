//
//  main.cpp
//  test_dynamic_arr
//
//  Created by grafon100 on 21/12/2021.
//


#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int **createArr(int row, int col){
    int **arr = new int *[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }
    
    return arr;
}



void fillArray(int **arr, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            arr[i][j] = rand()%10+3;
        }
    }
}

void outPutArray(int **arr, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void delArr(int **arr, int row){
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }
    
    delete [] arr;
}


int main()
{
    srand(time(0));
    
    int rows, cols;
    
    cout<<"Input rows: ";
    cin>>rows;
    
    cout<<"Input cols: ";
    cin>>cols;
    
    
    int **myArr;
    
    myArr = createArr(rows, cols);
    
    
    fillArray(myArr, rows, cols);
    outPutArray(myArr, rows,cols);


    delArr(myArr, rows);

    return 0;
}
