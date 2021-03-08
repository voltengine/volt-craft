#include "voltpy/voltpy.hpp"

#include <iostream>

namespace voltcraft {

void hello() {
	voltpy::hello();
	std::cout << "Hello from Voltcraft!" << std::endl;
}

}
