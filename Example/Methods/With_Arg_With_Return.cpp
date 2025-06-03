#include<iostream>

using namespace std;

class Student{
    
    public: int total_marks(int java, int cpp, int python){
        
        int total = java + cpp + python;
        return total;

    }

    public: float average_marks(int java, int cpp, int python){
        
        float average = (java + cpp + python) / 3;
        return average;

    }

    public: char grade(int java, int cpp, int python){
        
        float average = (java + cpp + python) / 3;
        if(average >= 90){
            return 'A';
        }else if(average >= 80){
            return 'B';
        }else if(average >= 70){
            return 'C';
        }else if(average >= 60){
            return 'D';
        }else{
            return 'F';
        }

    }

    public: string result(int java, int cpp, int python){
        
        float average = (java + cpp + python) / 3;
        if(average >= 60){
            return "Pass";
        }else{
            return "Fail";
        }

    }

};


int main(){

    Student student;
    cout<<"Total Marks: "<<student.total_marks(90, 85, 80)<<endl;
    cout<<"Average Marks: "<<student.average_marks(90, 85, 80)<<endl;
    cout<<"Grade: "<<student.grade(90, 85, 80)<<endl;
    cout<<"Result: "<<student.result(90, 85, 80)<<endl;

    return 0;
}