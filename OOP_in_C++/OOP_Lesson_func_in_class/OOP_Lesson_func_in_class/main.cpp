//
//  main.cpp
//  OOP_Lesson_func_in_class
//
//  Created by grafon100 on 09/01/2022.
//

#include <iostream>
#include <string>

using namespace std;

class Human{
    
public:
    string name;
    int age;
    double weight;
    
    
    void printDate(){
        cout<<"Name:\t"<<name<<";\nAge:\t"<<age<<";\nWeight:\t"<<weight<<";\n";
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    
    Human firstHumen;
    
    firstHumen.name = "Mikita Life";
    firstHumen.age = 26;
    firstHumen.weight = 73.2;
    
    firstHumen.printDate();
    
    return 0;
}
