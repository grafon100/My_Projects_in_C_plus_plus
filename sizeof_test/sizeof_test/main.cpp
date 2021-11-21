
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int array[]={22, 44,66, 66,33,55};
    //1sposob
    cout<<sizeof(array)/sizeof(int)<<endl;
    //2sposob
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    return 0;
}
