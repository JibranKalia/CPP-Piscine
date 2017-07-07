#include <iostream>

class Sample {

	public:
		int		foo;

		Sample( void );
		~Sample( void );
		void	bar( void );
};

/*
 * Constructor and Destructor have not return type.
*/

Sample::Sample( void ) {
	std::cout << "Constuctor called" << std::endl;
	this->foo = 42;
	this->bar();
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

//Pointer to current instance is passed.

void	Sample::bar( void ) {

	std::cout << "Bar called" << std::endl;
	return;
}

int		main() {

	Sample type;
//	std::cout << "type.foo: " << type.foo << std::endl;
	return (0);
}
