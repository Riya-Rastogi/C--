//class is a Blueprint
#include<iostream>
using namespace std;
class student
{
    //if we decalare string as a private then we have to create a set method to access it outside the class
    string s;
    //by defualt these are private
    public:
    // string s;
    int age;
    bool gender;
    //parameterised constructor
    student(string s, int age, bool gender)
    {
        this->s=s;
        this->age=age;
        this->gender=gender;
    }
    //copy constructor
    student(student &a)
    {
        cout<<"copy constructor"<<endl;
        this->s=s;
        this->age=age;
        this->gender=gender;
    }

    //distuctors---they are called automatically
    ~student()
    {
        cout<<"Distructor called";
    }
    void printInfo()
    {
        cout<<s<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    void setName(string s)
    {
        this->s = s;
    }
    void getName()
    {
        cout<<s<<endl;
    }
};
int main()
{
    // student s;
    // a.name='riya';
    // a.age=20;
    // a.gender=1;
    // student arr[3];
    // for(int i=0;i<1;i++)
    // {
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<1;i++)
    // {
    //     arr[i].printInfo();
    // }
    

    //constructor

    student a("Riya",20,1);
    // a.printInfo();
    // a.getName();

    //copy constructor
    student c=a;
}