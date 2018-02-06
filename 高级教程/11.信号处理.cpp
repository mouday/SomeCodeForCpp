#include <iostream>
#include <csignal>
#include <unistd.h>
#include <windows.h>

using namespace std;

void signalHandler(int signum)
{
    cout<<"interrupt signal( "<<signum<<") received\n";
    // 清理并关闭
    // 终止程序  
    exit(signum);
}
int main(){
     // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT,signalHandler);
    int i=0;

    while(++i)
    {
        cout<<"going to sleep..."<<endl;
        if(i==3)
        {
            raise(SIGINT);//生成信号
        }
        sleep(1);
    }
    system("pause");
    return 0;
}


// void (*signal (int sig, void (*func)(int)))(int); 