#include <iostream>

using namespace std;

template <typename T>
inline T const& Max(T const& a,T const& b)
{
    return a>b?a:b;
}

int main(){
    
    cout << "Max(15,20): "<<Max(15,20)<<endl;
    cout << "Max(15.5,20.2): "<<Max(15.5,20.2)<<endl;
    cout << "Max('Hello','World'): "<<Max("Hello","World")<<endl;

    return 0;
}