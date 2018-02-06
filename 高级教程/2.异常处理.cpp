#include <iostream>

using namespace std;

double division(int a, int b)
{
    if( b == 0 )
    {
        throw "division by zero condition!";
    }
    return (a/b);
}

int main()
{
    int x=5;
    int y=0;
    double z=0;

    try
    {
        z=division(x,y);
        cout<<"z = "<<z<<endl;
    }
    catch(const char *msg)
    {
        cerr<<msg<<endl;
    }
    
    return 0;
}
