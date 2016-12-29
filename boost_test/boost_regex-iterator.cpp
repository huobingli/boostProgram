#include <iostream>
#include <boost/xpressive/xpressive_dynamic.hpp>

int main() {
	using namespace boost::xpressive;

	std::string str("Power-bomb, power-suit, pOWER-beam all items\n");
	sregex reg = sregex::compile("power-(\\w{4})", icase);

	sregex_iterator pos(str.begin(), str.end(), reg);
	sregex_iterator end;
	while (pos != end) {
		std::cout << "[" << (*pos)[0] << "]";
		++pos;
	}
	std::cout << std::endl;
}