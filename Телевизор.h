#ifndef ���������_H
#define ���������_H

#include "��������������.h"

class ��������� : public �������������� {
private:
	std::string �����;
	int ������������;

public:
	���������();
	���������(std::string ��������, double ����, double ��������, std::string �����, int ������������);
	std::string �������������();
	void ���������������(std::string �����);
	int ��������������������();
	void ����������������������(int ������������);
};

#endif
