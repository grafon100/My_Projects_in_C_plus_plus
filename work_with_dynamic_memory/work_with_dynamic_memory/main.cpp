//
//  main.cpp
//  work_with_dynamic_memory
//
//  Created by grafon100 on 25/11/2021.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int *pa = new int;
    *pa = 5;
    cout<<*pa<<endl;
    
    delete pa;
    
    return 0;
}
