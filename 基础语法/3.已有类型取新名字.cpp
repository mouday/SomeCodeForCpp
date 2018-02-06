 // typedef 为一个已有的类型取一个新的名字

#include <iostream>

using namespace std;

int main(){
    typedef int myint;
    myint i=1;
    
    cout<<"i = "<<i<<endl;
    cout<<"sizeof i is : "<<sizeof(i)<<endl;

    return 0;
}
