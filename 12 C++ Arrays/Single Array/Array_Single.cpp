#include<iostream>

using namespace std;

class ArrayExample{

    int data[7] = {11,22,33,44,55,66,77};

public:
    void printData() {
        for(int i = 0 ; i < 7; i++){
            cout << "Data" << data[i] << endl;
        }
    }

};


int main(){

    ArrayExample arr;
    arr.printData();

    return 0;
}