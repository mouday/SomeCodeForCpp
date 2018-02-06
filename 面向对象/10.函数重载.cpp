#include <iostream>

using namespace std;

//重载决策
class Print
{
public:
    // 输出整数
    void print(int i)
    {
        cout<<"int : "<<i<<endl;
    }

    // 输出浮点数
    void print(double d)
    {
        cout<<"double : "<<d<<endl; 
    }
    // 输出字符串
    void print(string s)
    {
        cout<<"string : "<<s<<endl; 

    }
};

int main()
{
   Print pt;
   pt.print(5);
   pt.print(5.0);
   pt.print("5");

    return 0;
}
