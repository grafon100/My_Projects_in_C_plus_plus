//
//  main.cpp
//  fstream_object
//
//  Created by grafon100 on 20/01/2022.
//

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Point{

    
public:
    Point(){
        x = y = z = 0;
    };
    
    Point(int x, int y, int z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    
    
    void printPoints(){
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
        cout<<"Z: "<<z<<endl;
    }

    int x;
    int y;
    int z;
    
};


int main(int argc, const char * argv[]) {
    
    
    string myPath = "MyClass.txt";
    
    Point pointA;
    //pointA.printPoints();
    
//    //1.!
//    ofstream ofs;
//    ofs.open(myPath, ofstream::app);
//    //2.!
//    if(!ofs.is_open()){
//        cout<<"Error!\n";
//    } else {
//        cout<<"Open successful\n";
//        //2.1.!
//        ofs.write((char*)&pointA, sizeof(Point));
//    }
//    //3.!
//    ofs.close();
    
    
    //1.!
    ifstream ifs;
    ifs.open(myPath);
    //2.!
    if(!ifs.is_open()){
        cout<<"Error\n";
    } else {
        cout<<"Open successful!\n";
        cout<<"====================\n";
        Point pnt;
        while (ifs.read((char*)&pointA, sizeof(Point))) {
            pointA.pnt();
            cout<<"- - - - - - - - - -\n";
        }
    }
    //3.!
    ifs.close();
    
    
    
    return 0;
}
