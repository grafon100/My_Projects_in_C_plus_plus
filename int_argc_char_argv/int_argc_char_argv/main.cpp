//
//  main.cpp
//  int_argc_char_argv
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for(int i = 0; i<argc; i++){
        cout<<argv[i]<<endl;
    }
    return 0;
}
