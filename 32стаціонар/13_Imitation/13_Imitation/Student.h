#pragma once
#include"Header.h"
#include"Person.h"

class Student : public  Person // наслідник
{
	double scholarship;
public:
	void SetScholarship(double scholarship);
	void GetScholarship();
};
