#include <iostream>

using namespace std;

enum Rank{
    first,
    second,
    third
};

int main(){
//    enum Rank rank;
    int rank=1;
    switch(rank){
        case first:
            cout<<first<<endl;
            break;
        case second:
            cout<<second<<endl;
            break;
        case third:
            cout<<third<<endl;
            break;
        default:
            cout<<"NULL"<<endl;
            break;
    }
    return 0;
}

// 枚举类型(enumeration)

/*
形式:
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
*/
