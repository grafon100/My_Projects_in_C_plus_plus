//
//  main.cpp
//  string_and_char
//
//  Created by grafon100 on 13/01/2022.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    char string1[] = "Hello world!";
    
    char string2[] = {'H', 'e', 'l', 'l', 'o','\0'};
    
    cout<<string1<<endl;
    cout<<strlen(string1)<<endl;
    
    cout<<string2<<endl;
    cout<<strlen(string2)<<endl;
    
    return 0;
}
