#include <iostream>
#include <string>

int main() {
    // Integer variables
    int numberOfTutorials = 50;
    int tutorialViews = 1000000;

    // Floating-point variables
    double averageRating = 4.5;

    // Character variable
    char websiteInitial = 'C';

    // Boolean variable
    bool isCplusplusAwesome = true;

    // String variable from the C++ Standard Library
    std::string websiteName = "CodesWithPankaj";
    std::string websiteURL = "www.codeswithpankaj.com";

    // Displaying variable values
    std::cout << "Number of Tutorials: " << numberOfTutorials << std::endl;
    std::cout << "Tutorial Views: " << tutorialViews << std::endl;
    std::cout << "Average Rating: " << averageRating << std::endl;
    std::cout << "Website Initial: " << websiteInitial << std::endl;
    std::cout << "Is C++ Awesome? " << std::boolalpha << isCplusplusAwesome << std::endl;
    std::cout << "Website Name: " << websiteName << std::endl;
    std::cout << "Website URL: " << websiteURL << std::endl;

    return 0;
}
