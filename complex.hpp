#pragma once

/* a class modelling complex numbers a+bi*/
template<typename I> requires std::floating_point<I>
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
		std::cout<<"converting constructor called" << std::endl;
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
	complex_number conjugate(void) const {
		complex_number z = *this;
		return complex_number(z.a_real, - z.b_imm);
	}
	
	/* define the += operator between complex numbers */
	complex_number& operator+=(const complex_number& other) {
		I a = a_real;
		I b = b_imm;
		I c = other.a_real;
		I d = other.b_imm;
		a_real = a + c;
		b_imm = b + d;
		return *this;
	}
	
	/* define the + operator between complex numbers */
	complex_number operator+(const complex_number& other) const {
		complex_number com = *this;
		com += other;
		return com;
	}
	
	/* define the += operator between a complex number on the left 
	 * and an I on the right
	 */
	complex_number& operator+=(const I& other) {
		a_real += other;
		return *this;
	}
	
	/* define the + operator between a complex number on the left 
	 * and an I on the right
	 */
	complex_number operator+(const I& other) const {
		complex_number com = *this;
		com += other;
		return com;
	}
	
};

/* overload of <<, to print complex numbers in the form a+bi */
template<typename I>
std::ostream& operator<<(std::ostream& os, const complex_number<I>& z) {
	os << z.real();
	
	if (z.immaginary() != 0) {
		if (z.immaginary() == 1) 
			os << "+i";
		else if (z.immaginary() == -1)
			os << "-i";
		else
			os << std::showpos << z.immaginary() << "i" << std::noshowpos;
	}
	return os;
}