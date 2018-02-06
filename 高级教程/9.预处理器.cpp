#include <iostream>

using namespace std;

#define DEBUG

#define MIN(a,b) (((a)<(b))?a:b)//参数宏

#define MKSTR( x ) #x  //# 运算符会把令牌转换为用引号引起来的字符串。

#define CONTACT(x,y)  x ## y //## 运算符用于连接两个令牌
int main(){
    int i,j;
    i=100;
    j=30;

    #ifdef DEBUG   //条件编译
        cerr<<"Trace:inside main function"<<endl;
    #endif

    #if 1
        /*这是注释*/
        cout<<MKSTR(HELLO C++)<<endl;
    #endif

        cout <<"the minimum is:"<<MIN(i,j)<<endl;

    #ifdef DEBUG
        cerr<<"Trace:coming out of  main function"<<endl;
    #endif

    int xy=100;
    cout<<"xy = "<<CONTACT(x,y)<<endl;
    return 0;
}
