#include <iostream>

using namespace std;

int main(){
    int a=5;
    int b=6;

    //常量指针
    //*p不可修改 *p = 8；（ERROR）,p 可以修改 p = &b  （OK）
    const int *p=&a;
    cout<<"*p:"<<(*p)<<endl;
    p=&b;
    cout<<"*p:"<<(*p)<<endl;
    //*p=6;error

    //指针常量
    //*p可以修改*p = 8；（OK）,p不可以修改 p++（ERROR）
    int *const q=&a;
    cout<<"*q:"<<(*q)<<endl;
    *q=7;
    cout<<"*q:"<<(*q)<<endl;

    const int * const pq = &a;    // *p 和 p均不可改变了

    return 0;
}

/*
 程序员之路：C++常量指针和指针常量
 
简而言之，就是const修饰谁，谁就是常量，这里把“*”（星号），理解为独立的字符——指针，就比较好理解了

参考：https://zhidao.baidu.com/question/349376199.html