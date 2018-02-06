#include <iostream>

using namespace std;

// 第一个命名空间
namespace firstSpace
{
    void func()
    {
        cout<<"firstSpace"<<endl;
    }
}

// 第二个命名空间
namespace secondSpace
{
    void func()
    {
        cout<<"secondSpace"<<endl;
    }
}

int main()
{
    // 调用第一个命名空间中的函数
    firstSpace::func();
    
    // 调用第二个命名空间中的函数
    secondSpace::func();
    return 0;
}