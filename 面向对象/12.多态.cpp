#include <iostream>

using namespace std;

// 基类
class Shape
{
protected:
    int width;
    int heigth;
public:
    Shape(int a=0,int b=0)
    {
        width=a;
        heigth=b;
    }
    // 虚函数,如果没有virtual编译器设置为基类中的版本，这就是所谓的静态多态
    virtual int getArea()
    {
        cout<<"Shape area:"<<endl;
        return 0;
    }
};

class Rectangle:public Shape
{
public:
    Rectangle(int a=0,int b=0):Shape(a,b){}
    int getArea()
    {
        cout<<"Rectangle area"<<endl;
        return (width*heigth);
    }
};

class Triangle:public Shape
{
public:
    Triangle(int a=0,int b=0):Shape(a,b){}
    int getArea()
    {
        cout<<"Triangle area"<<endl;
        return (width*heigth/2);
    }
};

int main()
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle tri(10,5);

 // 调用矩形的求面积函数 area
   shape=&rec;
   shape->getArea();
// 调用三角形的求面积函数 area
   shape=&tri;
   shape->getArea();
    return 0;
}
