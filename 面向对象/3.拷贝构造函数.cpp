#include <iostream>

using namespace std;

class Example{
private:
    int a;
public:
    //构造函数
    Example(int b){
        a=b;
        cout<<"creat: a = "<<a<<endl;
    }

    //拷贝构造
    Example(const Example &obj){
        a=obj.a;
        cout<<"copy: a = "<<a<<endl;
    }

    //析构函数
    ~Example(){
        cout<<"delete: a = "<<a<<endl;
    }

    void show(){
        cout<<"a = "<<a<<endl;
    }
};

//全局函数，传入的是对象
void printExample(Example obj){
    cout<<"test"<<endl;
}

int main(){
    Example e(1);
    printExample(e);
    return 0;
}
