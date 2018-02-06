#include <iostream>
//#include <string>

using namespace std;

// 成员函数声明
class Pet{
public:
    Pet();
    ~Pet();
    Pet(string name);//带参数的构造函数
    
    void setName(string name);    
	string getName(void);
	
	void setAge(int age);
    int getAge(void);
	
private:
    string name;
    int age;

protected:
};

// 成员函数定义
Pet::Pet(){//范围解析运算符 :: 
    cout<<"构造函数 Pet"<<endl;
}

Pet::~Pet(){
    cout<<"析构函数 Pet"<<endl;
}

void Pet::setName(string name){
    this->name=name;
}

string Pet::getName(void){
    return this->name;
}

void Pet::setAge(int age){
    this->age=age;
}

int Pet::getAge(void){
    return this->age;
}

Pet::Pet(string name):name(name){//初始化列表
    cout<<"构造函数 Pet,name:"<<name<<endl;
}

int main(){
    Pet pet;
    //Pet pet1=new Pet("Jack");
    pet.setName("Tom");
    cout<<pet.getName()<<endl;
    return 0;
}
