#include <iostream>

using namespace std;

// 当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。
// 定义全局变量时，系统会自动初始化为下列值：

int i;
char c;
float f;
double d;
int *p;

int main(){
    cout<<"i = "<< i << endl;
    cout<<"c = "<< c << endl;
    cout<<"f = "<< f << endl;
    cout<<"d = "<< d << endl;
    cout<<"p = "<< p << endl;
    return 0;
}
