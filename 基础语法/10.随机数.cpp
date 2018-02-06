#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int i,j;

    //设置种子,生成随机数之前必须先调用 srand() 函数
    srand((unsigned)time(NULL));

    /* 生成 10 个随机数 */
    for(i=0;i<10;i++){

        j=rand()%100;/*产生100以内的随机整数*/
        cout<<"随机数："<<j<<endl;
    }
    // 生成实际的随机数
    return 0;
}


// 原型： void srand(unsigned seed);