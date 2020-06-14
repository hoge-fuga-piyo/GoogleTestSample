#include "dummy.h"
#include <random>
#include <iostream>

unsigned int Dummy::randomValue() const {
	std::random_device rand;
	return rand();
}

unsigned int Dummy2::getRandomValue(const Dummy& dummy) const {
	return dummy.randomValue();
}
