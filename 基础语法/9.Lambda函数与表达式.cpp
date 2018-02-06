#include <iostream>

using namespace std;

int main(){
    // 指明返回类型
    auto add=[](int a,int b) -> int {return a+b;};

    // 自动推断返回类型
    auto multiply=[](int a,int b){return a*b;};

    int sum=add(2,5);
    cout<<"sum:"<<sum<<endl;
    
    int product=multiply(2,5);
    cout<<"product:"<<product<<endl;

    return 0;
}
