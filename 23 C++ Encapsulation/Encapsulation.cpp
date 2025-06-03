#include<iostream>
using namespace std;
class data{
    string name;
    int age;
    public : data(string Name , int Age){
        name = Name;
        age = Age;
    }
    void set_name(string Name){
        name = Name;
    }
    void set_age(int Age){
        age = Age;
    } 
    string get_name(){
        return name;
    }
    int get_age(){
        return age;
    }
};
int main(){

    data dataObj("joy",12);
    cout<<"your name : "<<dataObj.get_name()<<endl;
    cout<<"your age : "<<dataObj.get_age()<<endl;

    dataObj.set_age(23);
    cout<<"your name : "<<dataObj.get_name()<<endl;
    cout<<"your age : "<<dataObj.get_age()<<endl;

    return 0;
}
