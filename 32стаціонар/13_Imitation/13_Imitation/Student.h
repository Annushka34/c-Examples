#pragma once
#include"Header.h"
#include"Person.h"

class Student : public  Person // ��������
{
	double scholarship;
public:
	void SetScholarship(double scholarship);
	void GetScholarship();
};
