#include <iostream>

using namespace std;

int main(){
    int i=5;
    int &r=i;//引用变量是一个别名

    cout<<"i = "<<i<<endl;
    cout<<"r = "<<r<<endl;

    i=10;
    cout<<"i = "<<i<<endl;
    cout<<"r = "<<r<<endl;

    r=20;
    cout<<"i = "<<i<<endl;
    cout<<"r = "<<r<<endl;
    return 0;
}
