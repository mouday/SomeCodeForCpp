#include <iostream>

using namespace std;

class Box
{
    double width;

public:
    friend void printWidth(Box box);//友元函数
    void setWidth(double width);
};

// 成员函数定义
void Box::setWidth(double wid)
{
    width=wid;
}

// 请注意：printWidth() 不是任何类的成员函数
void printWidth(Box box)
{
    /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
    cout<<"width of Box:"<<box.width<<endl;
}

int main(){
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}
