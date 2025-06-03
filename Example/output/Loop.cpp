#include<iostream>

using namespace std;
int main(){

    // print 1 to 10 number using for loop 
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }

    // print 1 to 10 number using while loop

    int i = 1;
    while(i <= 10){
        cout << i << " ";
        i++;
    }

    // print 1 to 10 number using do while loop

    i = 1;
    do{
        cout << i << " ";
        i++;
    }while(i <= 10);

    return 0;

}