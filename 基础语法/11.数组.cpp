#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
int main(){
    int n[10];

    // 初始化数组元素       
    for(int i=0;i<10;i++){
        n[i]=i+100;
    }
    cout<<"Element"<<setw(13)<<"value"<<endl;

    // 输出数组中每个元素的值    
    for (int i = 0; i < 10; ++i)
    {
        cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
    }
    return 0;
}


// setw() 函数来格式化输出