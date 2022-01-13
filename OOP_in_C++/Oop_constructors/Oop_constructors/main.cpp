//
//  main.cpp
//  Oop_constructors
//
//  Created by grafon100 on 13/01/2022.
//

#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int posX, int posY){
        x = posX;
        y = posY;
    }
    
    void SetX(int posX){
        x = posX;
    }
    void SetY(int posY){
        y = posY;
    }
    
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    
    void printPos(){
        cout<<"A("<<x<<";"<<y<<")\n";
    }
    
};


int main(int argc, const char * argv[]) {
    
    Point a(0, 0);
    a.printPos();
    a.SetX(3);
    a.SetY(2);
    a.printPos();
    
    
    return 0;
}
