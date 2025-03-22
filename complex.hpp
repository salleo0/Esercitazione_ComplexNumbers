#pragma once

/* a class modelling complex numbers */
template<typename I> requires std::integral<I> || std::floating_point<I>
class complex_number {
	/* private members */
	I a_real, b_imm;
	
public:
	/* default constructor */
	complex_number()
		: a_real(0), b_imm(0)
	{}
	
	/* user-defined constructor: 1 parameter */
	explicit complex_number(I n)
		: a_real(n), b_imm(0)
	{
		std::cout<<"converting constructor called" << std:endl;
	}
	
	/* user-defined constructor: 2 parameters */
	complex_number(I n, I m)
		: a_real(n), b_imm(m)
	{}
	
	/* return the real part */
	I real(void) const {
		return a_real;
	}
	
	/* return the immaginary part */
	I immaginary(void) const {
		return b_imm;
	}
	
	/* return the conjugate complex number */
	complex_number conjugate(const rational& other) {
		return complex_number(other.real(), -other.immaginary());
	}
	
	/* define the += operator between complex numbers */
	
	/* define the + operator between complex numbers */
	
	/* define the += operator between a complex number on the left 
	 * and an I on the right
	 */
	
	/* define the + operator between a complex number on the left 
	 * and an I on the right
	 */
	
};