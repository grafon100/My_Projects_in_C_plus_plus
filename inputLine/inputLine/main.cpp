//
//  main.cpp
//  inputLine
//
//  Created by grafon100 on 17/11/2021.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number, count = 0;
    char typeChar;
    char typeLine;
    
    
    cout<<"Input the number of characters: ";
    cin>>number;
    
    cout<<"Input the type of characters: ";
    cin>>typeChar;
    
    cout<<"Input the type of line: V -vertical, H -horizontal: ";
    cin>>typeLine;
    
    if(typeLine == 'V' || typeLine == 'v'){
        while(count < number){
            cout<<typeChar<<endl;
            count++;
        }
    } else if (typeLine == 'H' || typeLine == 'h'){
        while(count < number){
            cout<<typeChar<<" ";
            count++;
        }
        cout<<endl;
    } else {
        cout<<"You input incorrect symbol!"<<endl;
    }
    
    
    return 0;
}
