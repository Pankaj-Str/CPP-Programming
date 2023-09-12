#include<iostream>

using namespace std;

class Info{

    public:void getinfo(){
    cout<<"welcome to codeswithpankaj.com"<<endl;
    }

    public:void getmsg(string msg){
    cout<<"msg : "<<msg<<endl;
    }

};

int main(){
    // create a object 

    // classname objectname
    Info obj;
    obj.getinfo();
    obj.getmsg("p4n.in");
  


    return 0;
}