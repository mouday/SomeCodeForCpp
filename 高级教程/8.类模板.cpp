#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

// 下面的实例定义了类 Stack<>，并实现了泛型方法来对元素进行入栈出栈操作：
// 在模板定义语法中关键字 class 与 typename 的作用完全一样
template <class T>
class Stack{
private:
    vector<T> elems;
public:
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const{ // 如果为空则返回真。
        return elems.empty();
    }
};

// 追加传入元素的副本
template<class T>
void Stack<T>::push(T const& elem)
{   
    elems.push_back(elem);
}

// 删除最后一个元素
template<class T>
void Stack<T>::pop()
{
    if(elems.empty())
    {
        throw out_of_range("Stack<T>::pop() empty stack");
    }
    elems.pop_back();
}

// 返回最后一个元素的副本 
template <class T>
T Stack<T>::top()const
{
    if(elems.empty())
    {
        throw out_of_range("Stack<T>::top() empty stack");
    }
    return elems.back();
}
int main(){
    try
    {
        Stack<int> intStack;
        Stack<string> strStack;

        // 操作 int 类型的栈 
        intStack.push(7);
        cout<<intStack.top()<<endl;

        // 操作 string 类型的栈 
        strStack.push("Hello");
        cout<<strStack.top()<<endl;
        strStack.pop();
    }
    catch(exception const& ex)
    {
        cerr<<"exception:"<<ex.what()<<endl;
        return -1;
    }
    return 0;
}