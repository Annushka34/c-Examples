#ifndef FILE_H
#define FILE_H

#if defined(MYLIBRARY)
#define LIBRARY_EXPORT __declspec(dllexport)
#else
#define LIBRARY_EXPORT
#endif

#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

void LIBRARY_EXPORT CalcSum();
void LIBRARY_EXPORT CalcMin();

#endif 
