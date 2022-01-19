//
//  main.cpp
//  test_delete
//
//  Created by grafon100 on 19/01/2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int repData = 0;
    int arr[] = {1, 2, 2, 2, 3, 2};
    int delData = 2;
    int newArr[5-3]{};
    
    for(int i = 0; i<5; i++){
        if(delData == arr[i]){
            repData++;
//            newArr[i] = arr[i+repData];
//            cout<<newArr[i]<<endl;
        } else {
            newArr[i-repData] = arr[i];
            cout<<newArr[i-repData]<<endl;
        }
    }
    

    return 0;
}
