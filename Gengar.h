/*****************************************************************
//
//  NAME:        Koby Villalobos
//
//  HOMEWORK:    10
//
//  CLASS:	 ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        December 5, 2018
//
//  FILE:        Gengar.h
//
//  DESCRIPTION:
//   This is a header file for the file Gengar.cpp         
//
//
****************************************************************/

#ifndef GENGAR_H
#define GENGAR_H

#include "Pokemon.h"
#include <string>

class Gengar : public Pokemon
{
    public:
	Gengar();
        ~Gengar();
        void printData();
};

#endif
