// Товар.h
#ifndef ТОВАР_H
#define ТОВАР_H

#include <string>

class Товар {
protected:
	std::string название;
	double цена;

public:
	Товар();
	Товар(std::string название, double цена);
	std::string получитьНазвание();
	void установитьНазвание(std::string название);
	double получитьЦену();
	void установитьЦену(double цена);
};

#endif