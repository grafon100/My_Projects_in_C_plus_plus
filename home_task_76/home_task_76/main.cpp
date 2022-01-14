//
//  main.cpp
//  home_task_76
//
//  Created by grafon100 on 14/01/2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char *myString = "Hello";
    int size = 0;
    int controlSize = 0;
    controlSize = strlen(myString);
    
    int i = 0;
    while(myString[i] != '\0'){
        size++;
        i++;
    }
    
    
    
    cout<<"test size: \t \t"<<size<<endl;
    cout<<"control size: \t"<<controlSize<<endl;
    
    
    
    
    return 0;
}
