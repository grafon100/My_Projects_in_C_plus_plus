//
//  main.cpp
//  prototype_func
//
//  Created by grafon100 on 22/11/2021.
//

#include <iostream>
#include <time.h>
using namespace std;

void welcom(string name, int temes);


int main(int argc, const char * argv[]) {
    srand(time(NULL));
    
    string myName = "Nik";
    int times = rand()%10 + 1;
    welcom(myName, times);
    
    return 0;
}


void welcom(string name, int times){
    cout <<"===== "<< times <<" =====\n";
    for (int i = 0; i < times; ) {
        cout<<++i<<") Hello, "<<name<<"!\n";
    }
    
}
