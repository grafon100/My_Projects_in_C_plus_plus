//
//  main.cpp
//  string_like_dynamic_array
//
//  Created by grafon100 on 14/01/2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char *myArra2D[] = {"Hello", "This", "World!"};
    
    for(int i = 0; i<3; i++){
        cout<<myArra2D[i]<<endl;
    }
    
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<strlen(myArra2D[i]); j++){
            cout<<myArra2D[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}
