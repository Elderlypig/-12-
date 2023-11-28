#ifndef ПИЩЕВОЙПРОДУКТ_H
#define ПИЩЕВОЙПРОДУКТ_H

#include "Товар.h"

class ПищевойПродукт : public Товар {
private:
	double вес;

public:
	ПищевойПродукт();
	ПищевойПродукт(std::string название, double цена, double вес);
	double получитьВес();
	void установитьВес(double вес);
};

#endif
