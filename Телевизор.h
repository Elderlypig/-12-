#ifndef ТЕЛЕВИЗОР_H
#define ТЕЛЕВИЗОР_H

#include "БытоваяТехника.h"

class Телевизор : public БытоваяТехника {
private:
	std::string бренд;
	int размерЭкрана;

public:
	Телевизор();
	Телевизор(std::string название, double цена, double гарантия, std::string бренд, int размерЭкрана);
	std::string получитьБренд();
	void установитьБренд(std::string бренд);
	int получитьРазмерЭкрана();
	void установитьРазмерЭкрана(int размерЭкрана);
};

#endif
