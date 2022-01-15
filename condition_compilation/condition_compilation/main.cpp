//
//  main.cpp
//  condition_compilation
//
//  Created by grafon100 on 15/01/2022.
//

#include <iostream>
//#define _DEBUG
//#define TEST

using namespace std;

int main(int argc, const char * argv[]) {
    
    
#ifdef _DEBUG
    cout<<"Debug Defined"<<endl;
#endif
    
    for (int i = 0; i<5; i++) {
        cout<<i<<" time\n";
    }
    
#ifdef _DEBUG
    cout<<"End while for"<<endl;
#endif
    
    cout<<"=================="<<endl;
    cout<<"Test define code: "<<endl;
    
#ifdef TEST
    cout<<"3+3="<<3+3<<endl;
#else
    cout<<"3-3="<<3-3<<endl;
#endif


    return 0;
}
