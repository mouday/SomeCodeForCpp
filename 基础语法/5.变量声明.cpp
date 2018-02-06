#include <iostream>

using namespace std;

// 变量声明 允许多次声明一个变量   编译时
extern int a,b;
extern int c;
extern float f;

int main(){
    // 变量定义
    int a,b;
    int c;
    float f;

    // 实际初始化
    a=10;
    b=20;
    c=a+b;

    cout<< "c = " <<c << endl;

    f=70.0/3.0;

    cout << "f = " << f<<endl;
    return 0;
}
