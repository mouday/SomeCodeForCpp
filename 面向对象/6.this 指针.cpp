#include <iostream>

using namespace std;

class Dog
{
private:
    int age;
public:
    Dog(int age)
    {
        this->age=age;
    }

    int getAge()
    {
        return this->age;
    }
    bool compare(Dog dog)
    {
        return this->getAge()>dog.getAge();
    }
};

int main()
{
    Dog dog1(50);
    Dog dog2(20);

    cout<<dog1.compare(dog2)<<endl;
    
    return 0;
}
