#pragma once
#include"Header.h"
#include"Person.h"

class Student : private  Person // наслідник
{
	double scholarship;
public:
	void SetScholarship(double scholarship);
	void GetScholarship();
};
