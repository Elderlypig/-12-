#ifndef БЫТОВАЯТЕХНИКА_H
#define БЫТОВАЯТЕХНИКА_H

#include "Товар.h"

class БытоваяТехника : public Товар {
private:
	double гарантия;

public:
	БытоваяТехника();
	БытоваяТехника(std::string название, double цена, double гарантия);
	double получитьГарантию();
	void установитьГарантию(double гарантия);
};

#endif

