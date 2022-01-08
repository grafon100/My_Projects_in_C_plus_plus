//
//  main.cpp
//  Oop_start_lesson_73
//
//  Created by grafon100 on 08/01/2022.
//

#include <iostream>
#include <string>

using namespace std;

class Human{
public:
    int age;
    double weight;
    string name;
};


class Point{
public:
    int x;
    int y;
    int z;
};

int main(int argc, const char * argv[]) {
    
    Human firstHuman;
    firstHuman.age = 25;
    firstHuman.name = "Mikita Life";
    firstHuman.weight = 70.4;
    
    Human secondHuman;
    secondHuman.age = 20;
    secondHuman.name = "Hanna Life";
    secondHuman.weight = 52.5;
    
    cout<<firstHuman.name<<endl;
    cout<<firstHuman.age<<endl;
    cout<<firstHuman.weight<<endl;
    
    cout<<"=======================\n";
    cout<<secondHuman.name<<endl;
    cout<<secondHuman.age<<endl;
    cout<<secondHuman.weight<<endl;
    
    
    cout<<"=======================\n";
    Point a;
    a.x = 3;
    a.y = 4;
    a.z = 3;
    cout<<"Point a have the next coordinates: x="<<a.x<<"; y="<<a.y<<"; z="<<a.z<<";\n";
   
    return 0;
}
