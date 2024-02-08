#include<iostream>

using namespace std;

// create a function 
// basic function
void info(){

    cout<<"codeswithpankaj.com"<<endl;

}

// function with arg..

void get_info(string name,int age){

    cout<<"your name : "<<name<<endl;
    cout<<"your age : "<<age<<endl;


}

// with return type

int get_number(){

    return 500;
}



int main(){

    // calling function 
    info();
    info();

    get_info("joy",44);
    get_info("nishant",19);

    cout<<get_number()+900<<endl;


    return 0;
}