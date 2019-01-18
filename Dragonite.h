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
//  FILE:        Dragonite.h
//
//  DESCRIPTION:
//   This is a header file for the file Dragonite.cpp         
//
//
****************************************************************/

#ifndef DRAGONITE_H
#define DRAGONITE_H

#include "Pokemon.h"
#include <string>

class Dragonite : public Pokemon
{
    public:
	Dragonite();
        ~Dragonite();
        void printData();
};

#endif




