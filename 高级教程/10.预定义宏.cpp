#include <iostream>
// 预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾。
using namespace std;

int main(){
    cout<<"value of __LINE__ = "<<__LINE__<<endl;//当前行号
    cout<<"value of __FILE__ = "<<__FILE__<<endl;//当前文件名
    cout<<"value of __DATE__ = "<<__DATE__<<endl;//日期
    cout<<"value of __TIME__ = "<<__TIME__<<endl;//时间
    return 0;
}
