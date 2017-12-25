#include <iostream>
#include "base/svector.hpp"
#include "base/tls.hpp"

using namespace std;

int main() {

	base::svector<int> vec;
	base::tlsdata<int, 0>::data();

	return 0;
}