#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
    std::string m_strName;
 
    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string strName)
        : m_strName(strName)
    {
    	cout<<"animal Constructor";
    }
public:
    virtual ~Animal(){
    	cout<<"animal Destructor";
    }
 
public:
    std::string GetName() { return m_strName; }
    virtual const char* Speak() { return "???"; }
};
 
class Cat: public Animal
{
public:
    Cat(std::string strName)
        : Animal(strName)
    {
    	cout<<"Cat Constructor";
    }
    virtual ~ Cat(){
    	cout<<"Cat Destructor";
    }
 
    virtual const char* Speak() { return "Meow"; }
};
 
class Dog: public Animal
{
public:
    Dog(std::string strName)
        : Animal(strName)
    {
    	cout<<"Dog Constructor";
    }
 	 virtual ~Dog(){
    	cout<<"Dog Destructor";
    }
    virtual const char* Speak() { return "Woof"; }
};
void Report(Animal &rAnimal)
{
    cout << rAnimal.GetName() << " says " << rAnimal.Speak() << endl;
}
void swap (int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}
 
int main()
{	//dynamic cast
    //Cat cCat("Fred");
    //Dog cDog("Garbo");
    //Report(cCat);
    //Report(cDog);
    Animal *l=new Cat("sameer");
    cout<<l->Speak();
    delete l;
    Animal *m=new Animal("chetan");

    //Report(*l);
}