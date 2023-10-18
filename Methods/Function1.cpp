#include<iostream>
using namespace std;

// basic function

void info(){
    cout<<"website - "<<"codeswithpankaj.com"<<endl;
}

// arguments function 

void getinfo(int age, string name,float height){
     cout<<"Name - "<<name<<endl;
     cout<<"Age - "<<age<<endl;
     cout<<"Height - "<<height<<endl;
}

// return type

int getnumber(){

    return 200;
}



int main(){

    info();
    getinfo(12,"joy",3.4);
    cout<<"number - "<<getnumber()+900<<endl;

    return 0;
}