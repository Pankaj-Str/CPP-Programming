#include<iostream>
#include<cmath>
#include <cstring>

// sqrt(25)
// pow(2, 3)
// abs(-7)

using namespace std;

int main(){

    
// C++ acos()
// Returns Inverse cosine a Number

cout<<"Returns Inverse cosine a Number "<<acos(3.4)<<endl;

// C++ asin()
// Returns Inverse Sine a Number
cout<<"Returns Inverse Sine a Number "<<asin(3.4)<<endl;

// C++ atan()
// Returns Inverse tangent a Number
cout<<"Returns Inverse tangent a Number "<<atan(3.4)<<endl;

// C++ atan2()
// Returns Inverse Tangent of a Coordinate
cout<<"Returns Inverse Tangent of a Coordinate "<<atan2(3.4,3.3)<<endl;

// C++ ceil()
// Return ceiling value of number
cout<<"Return ceiling value of number "<<ceil(3.4)<<endl;

// C++ cmath abs()
// Returns absolute value of an argument
cout<<"Returns absolute value of an argument "<<abs(3.4)<<endl;

// C++ cos()
// Returns Cosine of the Argument
cout<<"Returns Cosine of the Argument "<<cos(3.4)<<endl;

// C++ exp()
// returns exponential (e) raised to a number
cout<<"returns exponential (e) raised to a number "<<exp(3.4)<<endl;

// C++ fabs()
// Returns absolute value of argument
cout<<"Returns absolute value of argument "<<fabs(3.4)<<endl;

// C++ floor()
// Returns floor value of decimal number
cout<<"Returns floor value of decimal number "<<floor(3.4)<<endl;

// C++ fmax()
// returns largest among two arguments passed
cout<<"returns largest among two arguments passed "<<fmax(3.4,3.3)<<endl;

// C++ fmod()
// Computes floating point remainder of division
cout<<"Computes floating point remainder of division "<<fmod(3.4,3.3)<<endl;

// C++ log()
// Returns Natural Logarithm of a Number
cout<<"Returns Natural Logarithm of a Number "<<log(3.4)<<endl;

// C++ log10()
// Returns Base 10 Logarithm of a Number
cout<<"Returns Base 10 Logarithm of a Number "<<log10(3.4)<<endl;

// C++ log2()
// returns base2 logarithm of a number
cout<<"returns base2 logarithm of a number "<<log2(3.4)<<endl;

// C++ modf()
// Breaks Number Into Integral and Fractional Part
    double x = 14.86, intPart, fractPart;
	
	fractPart = modf(x, &intPart);
	cout << x << " = " << intPart <<"Breaks Number Into Integral and Fractional Part" << " + " << fractPart << endl;
	
	x = -31.201;
	fractPart = modf(x, &intPart);
	cout << x << " = " << intPart << "Breaks Number Into Integral and Fractional Part"<<" + " << fractPart << endl;

// C++ nan()
// returns a quiet NaN value
    double src = nan("1");
    uint64_t dest;
    
    // copies variable src to dest
    // use <cstring> for memcpy()
    memcpy(&dest, &src, sizeof src);
    cout << "nan(\"1\") = " << src << " (" << hex << dest << ")\n";

// C++ pow()
// Computes Power a Number
cout<<"Computes Power a Number "<<pow(3.4,3.3)<<endl;

// C++ remainder()
// Returns remainder of x/y
cout<<"Returns remainder of x/y "<<remainder(3.4,3.3)<<endl;

// C++ round()
// Returns integral value nearest to argument
cout<<"Returns integral value nearest to argument "<<round(3.4)<<endl;

// C++ sin()
// Returns Sine of the Argument
cout<<"Returns Sine of the Argument "<<sin(3.4)<<endl;

// C++ sqrt()
// Computes Square Root of A Number
cout<<"Computes Square Root of A Number "<<sqrt(3.4)<<endl;

// C++ tan()
// Returns Tangent of the Argument
cout<<"Returns Tangent of the Argument "<<tan(3.4)<<endl;

// C++ trunc()
// Truncates the demical part of a number
cout<<"Truncates the demical part of a number "<<trunc(3.4)<<endl;

    return 0;
}