#include <iostream>
using namespace std;
int main() {
  try {
    // Code that might throw an exception
    int x = 10;
    int y = 0;
    int z = x / y;
    cout << z << endl;
  } catch (const exception& e) {
    // Code to handle the exception
    //cout << "An exception occurred: " << e.what() << endl;
    cout<<"Do not Enter Zero Value - "<<endl;
  }

  return 0;
}
