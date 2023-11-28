#ifndef МОЛОКО_H
#define МОЛОКО_H

#include "ПищевойПродукт.h"

class Молоко : public ПищевойПродукт {
private:
	int срокПодготовки;

public:
	Молоко();
	Молоко(std::string название, double цена, double вес, int срокПодготовки);
	int получитьСрокПодготовки();
	void установитьСрокПодготовки(int срокПодготовки);
};

#endif

