#include <iostream>
#include "complex.hpp"

int main(void) {
	using complex = complex_number<int>;
	/* check if both user-defined constructor work */
	complex z1(1,1);
	std::cout << "The complex number equal to 1+i has been defined" << std::endl;
	complex z2(5);
	std::cout << "The real number (immaginary part equal to 0) equal to 5 ";
	std::cout << "has been defined" << std::endl;
	
	/* check if the methods that return the real part and the 
	 * immaginary part work 
	 */
	
	return 0;
}