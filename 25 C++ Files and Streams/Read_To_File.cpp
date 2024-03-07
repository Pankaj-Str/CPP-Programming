#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("p4n.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
}