#include <iostream>

using namespace std;

//默认参数
int sum(int a, int b=20){
    int result;
    result=a+b;
    return result;
}

int main(){
    int  a=10;
    int b=10;
    int result;

     // 调用函数来添加值
    result=sum(a,b);
    cout<<"sum :"<<result<<endl;

     // 再次调用函数
    result=sum(a);
    cout<<"sum :"<<result<<endl;

    return 0;
}
