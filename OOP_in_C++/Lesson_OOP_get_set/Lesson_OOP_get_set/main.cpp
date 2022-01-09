//
//  main.cpp
//  Lesson_OOP_get_set
//
//  Created by grafon100 on 09/01/2022.
//

#include <iostream>
using namespace std;

class Point{
    
    
private:
    int x;
    int y;

public:
    void SetY(int valueY){
        y = valueY;
    }
    int GetY(){
        return y;
    }
    
    void SetX(int valueX){
        x = valueX;
    }
    int GetX(){
        return x;
    }
    
    
    void Print(){
        cout<<"X="<<x<<";\nY="<<y<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
    
    Point a;
    a.SetX(33);
    a.SetY(11);
    a.Print();
    
    
    
    
    
    
    return 0;
}
