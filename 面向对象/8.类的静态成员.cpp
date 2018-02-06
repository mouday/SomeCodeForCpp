#include <iostream>

using namespace std;

class Dog
{
private:
    
    int age;
public:
	static int count;
    Dog(int age)
    {
        cout<<"Constructor"<<endl;
        this->age=age;
        count++; // 每次创建对象时增加 1
    }

    static int getCount()
    {
        return count;
    }

};

// 初始化类 Box 的静态成员
int Dog::count=0;

int main()
{
    cout<<"Dog::count = "<<Dog::count<<endl;

    Dog dog1(50);
    Dog dog2(20);

    cout<<"Dog::count = "<<Dog::getCount()<<endl;

    return 0;
}
