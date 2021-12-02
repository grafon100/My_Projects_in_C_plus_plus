//
//  main.cpp
//  array_2D
//
//  Created by grafon100 on 02/12/2021.
//

#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int rows;
    int cols;
    
    cout<<"Input rows = ";
    cin>>rows;
    cout<<"Input cols = ";
    cin>>cols;
    
    int **arr2D = new int *[rows];
    for(int i = 0; i<rows; i++){
        arr2D[i] = new int[cols];
    }
    
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            arr2D[i][j] = rand()%10+1;
        }
    }
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout<<setw(3)<<arr2D[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    for(int i = 0; i<rows; i++){
        delete [] arr2D[i];
    }
    delete [] arr2D;
    
    return 0;
}
