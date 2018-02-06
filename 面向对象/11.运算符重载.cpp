#include <iostream>

using namespace std;

class Box
{
private:
    int height;
    int width;
public:
    Box(){}

    Box(int width, int heigth)
    {
        this->width=width;
        this->height=height;
    }

    Box operator+(const Box &b)
    {
        Box box;
        box.height=this->height + b.height;
        box.width=this->width + b.width;
        return box;
    }

    void printBox()
    {
        cout<<"Box:"<<this<<endl;
        cout<<"width = "<<this->width<<endl;
        cout<<"height = "<<this->height<<endl;
    }
};

int main()
{
    Box b1(2,3);
    Box b2(4,5);
    
    b1.printBox();
    b2.printBox();
    
    Box b3;
    b3=b1+b2;
    
    b1.printBox();
    b2.printBox();
    b3.printBox();
    
	return 0;
}
