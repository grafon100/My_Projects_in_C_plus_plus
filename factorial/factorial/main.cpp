

#include <iostream>

using namespace std;


int fuctor(int n){
    if(n==0){
        return 0;
    }
    
    if(n==1){
        return 1;
    }
    
    return n * (n-1);
}

int main(int argc, const char * argv[]) {
    int f;
    cout<<"Input your number: ";
    cin>>f;
    
    cout<<fuctor(f)<<endl;
    
    
    
    
    
    return 0;
}
