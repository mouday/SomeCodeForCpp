#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1="Hello";
    string str2="World";
    string str3;
    int len;

    // 复制 str1 到 str3
    str3=str1;
    cout<<"str3:"<<str3<<endl;

    // 连接 str1 和 str2
    str3=str1+str2;
    cout<<"str3:"<<str3<<endl;

    // 连接后，str1 的总长度
    len=str1.size();
    cout<<"str1.size():"<<len<<endl;
    
    string http="www.baidu.com";
    cout<<http<<endl;
    cout<<http.length()<<endl;

    //拼接
    http.append("/c++");
    cout<<http<<endl;

    //删除
    //查找"C++"在字符串中的位置
    int pos=http.find("/c++");
    cout<<pos<<endl;

    //从位置pos开始，之后的4个字符替换为空，即删除
    http.replace(pos,4,"");
    cout<<http<<endl;

    //找子串baidu
    int first=http.find_first_of(".");//从头开始寻找字符'.'的位置
    int last=http.find_last_of(".");//从尾开始寻找字符'.'的位置
    cout<<http.substr(first+1,last-first-1)<<endl;//提取"baidu"子串并打印
    
    return 0;
}
