#include <iostream>

using namespace std;

class Box
{
    int NO;//默认情况下，类的所有成员都是私有的private
public:
    double length;
    double breadth;//width
    double height ;

    //定义方法
    double getVolume()
    {
        return height * breadth * height;
    }

    // 成员函数声明
    void setLength(double len);
};

// 成员函数定义
void Box::setLength(double len)
{
    length=len;
}

int main(){
     // 声明
    Box box1;
    Box box2;
    double volume=0.0 ; //体积

    //box1
    box1.length=5.0;
    box1.breadth=6.0;
    box1.height=7.0;

    //box2
    box2.length=10.0;
    box2.breadth=12.0;
    box2.height=13.0;

    //volume
    volume=box1.height* box1.breadth * box1.height;
    cout<<"volume of box1: "<<volume<<endl;

    volume=box2.height* box2.breadth * box2.height;
    cout<<"volume of box2: "<<volume<<endl;

    cout<<"box1:"<<box1.getVolume()<<endl;
    cout<<"box2:"<<box2.getVolume()<<endl;

    cout<<"box1.length:"<<box1.length<<endl;
    box1.setLength(10);
    cout<<"box1.length:"<<box1.length<<endl;

    return 0;
}
