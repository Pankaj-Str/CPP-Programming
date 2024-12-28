#include<iostream>

using namespace std;

class Report{

        public : int JAVAMarks(){
            return 90;
        } 

        public : float CPPMarks(){
            return 85.5;
        }

        public : char Grade(){
            return 'A';
        }

        public : string Result(){
            return "Pass";
        }

};

int main(){

    Report report;
    cout<<"Java Marks: "<<report.JAVAMarks()<<endl;
    cout<<"C++ Marks: "<<report.CPPMarks()<<endl;
    cout<<"Grade: "<<report.Grade()<<endl;
    cout<<"Result: "<<report.Result()<<endl;
 

    return 0;
}