#include <iostream>

using namespace std;

// 基类
class Shape
{
public:
    void setWidth(int width)
    {
        this->width=width;
    }
    void setHeigth(int height)
    {
        this->height=height;
    }

protected:
    int width;
    int height;
};

class PaintCost
{
public:
    int getCost(int area )
    {
        return area*70; 
    }
};

// 派生类,多继承,默认为 private
class Rectangle:public Shape,public PaintCost
{
    public:
        int getArea()
        {
            return width* height;
        }
};

int main()
{
    Rectangle rect;
    rect.setWidth(2);
    rect.setHeigth(5);

    int area=rect.getArea();
    // 输出对象的面积
    cout<<"area = "<<area<<endl;

    // 输出总花费
    cout<<"cost = "<<rect.getCost(area)<<endl;

    return 0;
}
