#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("afile.txt");

    outfile<<"hello world!"<<endl;

    outfile.close();

     // 以读模式打开文件
    ifstream infile;
    infile.open("afile.txt");

    infile>>data;
    cout<<data<<endl;

    infile.close();
    
    return 0;
}
