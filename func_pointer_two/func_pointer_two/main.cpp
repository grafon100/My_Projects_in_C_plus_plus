//
//  main.cpp
//  func_pointer_two
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
#include <string>
using namespace std;

string GetDataFromBD(){
    return "Data from BD";
}

string GetDataWebServer(){
    return "Data from WebS";
}

void showInfo(string (*yourFunc)()){
    cout<<yourFunc()<<endl;
}

int main(int argc, const char * argv[]) {
    showInfo(GetDataFromBD);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~\n";
    showInfo(GetDataWebServer);
    
    return 0;
}
