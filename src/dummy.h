#ifndef DUMMY_H
#define DUMMY_H

class Dummy {
public:
	virtual unsigned int randomValue() const;
};

class Dummy2 {
public:
	unsigned int getRandomValue(const Dummy& dummy) const;
};

#endif
