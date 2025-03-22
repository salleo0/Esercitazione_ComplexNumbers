#include <iostream>
#include <sstream>
#include "complex.hpp"

int main(void) {
	using complex = complex_number<int>;
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
	return 0;
}