#include <iostream>

using namespace std;

class Box
{
public:
    Box(){
        cout<<"构造函数"<<endl;
    }
    ~Box(){
        cout<<"析构函数"<<endl;
    }
};

int main()
{
    Box *boxs=new Box[4];//运行时分配堆内的内存
    delete[] boxs;
    return 0;
}
