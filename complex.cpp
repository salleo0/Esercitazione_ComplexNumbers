#include <iostream>
#include <sstream>
#include "complex.hpp"

int main(void) {
	using complex = complex_number<float>;
	
	/* check if both user-defined constructor work */
	std::cout << std::endl << "---CONSTRUCTORS---" << std::endl;
	complex z1(1,1);
	std::cout << "The complex number equal to 1+i has been defined" << std::endl;
	complex z2(5);
	std::cout << "The real number (immaginary part equal to 0) equal to 5 ";
	std::cout << "has been defined" << std::endl;
	
	/* check if the methods that return the real part and the 
	 * immaginary part work 
	 */
	std::cout << std::endl << "---REAL AND IMMAGINARY PARTS---" << std::endl;
	std::cout << "The real parts of the complex numbers " << z1 << " and " << z2;
	std::cout << " are respectively: " << z1.real() << ", " << z2.real() << std::endl;
	std::cout << "The immaginary parts of the complex numbers " << z1 << " and " << z2;
	std::cout << " are respectively: " << z1.immaginary() << ", " << z2.immaginary() << std::endl;
	
	/* check if the methods that return the conjugate works */
	std::cout << std::endl << "---CONJUGATE---" << std::endl;
	std::cout << "Conjugate of " << z1 << ": " << z1.conjugate() << std::endl;
	std::cout << "Conjugate of " << z2 << ": " << z2.conjugate() << std::endl;
	
	/* check if the overload of + between two complex numbers works */
	std::cout << std::endl << "---OVERLOAD OF +---" << std::endl; 
	complex z3(5, -6);
	complex z4(-1,7);
	std::cout << "(" << z3 << ")" << "+(" << z4 << ") = " << z3+z4 << std::endl;
	
	/* check if the overload of + between one complex number on the right and 
	 * one I on the left works */
	float i = -10;
	std::cout << "(" << z3 << ")" << std::showpos << i << " = " << std::noshowpos << z3 + i << std::endl;
	
	/* chech if the overload of * between two complex numbers works */
	std::cout << std::endl << "---OVERLOAD OF *---" << std::endl; 
	std::cout << "(" << z3 << ")" << "*(" << z4 << ") = " << z3*z4 << std::endl;
	
	/* check if the overload of + between one complex number on the right and 
	 * one I on the left works */
	std::cout << "(" << z3 << ")" << "*(" << i << ") = " << z3*i << std::endl;
	
	return 0;
}