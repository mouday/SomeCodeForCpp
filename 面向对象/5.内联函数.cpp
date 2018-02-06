#include <iostream>

using namespace std;

inline max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int a=3;
    int b=5;
    cout<<"max(a,b) "<<max(a,b)<<endl;
    return 0;
}
