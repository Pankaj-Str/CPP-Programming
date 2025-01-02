#include<iostream>

using namespace std;

class student
{
    public : void info()
    {
        cout<<"I am a student"<<endl;
        cout<<" My name is John "<<endl;
        cout<<" My age is 20"<<endl;
    }
};


class school : public student{

    public : void School_info()
    {
        cout<<"I am a school"<<endl;
        cout<<" My name is St. Xavier's "<<endl;
        cout<<" My address is New York"<<endl;
    }

};

int main()
{
    school s;
    s.info();
    s.School_info();

    return 0;
}