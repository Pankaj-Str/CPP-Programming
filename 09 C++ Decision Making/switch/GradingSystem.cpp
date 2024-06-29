#include<iostream>
using namespace std;
int main(){

    // Percentage Eq U Classification
    // 90 to 100 4.5 O Out standing
    // 80 to 89 4.0 A+ Distinction
    // 60 to 79 3.5 A First Class
    // 50 to 59 3.0 B+ Second Class
    // 40 to 49 2.5 B Pass Class
    // < 39 2.0 C Fail

   char Grade;
   cout<<"Enter Grade  - "<<endl;
   cin>>Grade;
   switch(Grade){
    case 'o':
    cout<<"Out Standing"<<endl;
    break;
    case 'A' :
    cout<<"Distinction"<<endl;
    break;
    case 'B' :   
    cout<<"First Class"<<endl;
    break;
    case 'C' :
    cout<<"Second Class"<<endl;
    break;
    case 'D' :
    cout<<"Pass Class"<<endl;
    break;
    case 'F' :
    cout<<"Fail"<<endl;
    break;
    default:
    cout<<"Invalid Grade"<<endl;
   
    
   }



    return 0;
}