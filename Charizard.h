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
//  FILE:        Charizard.h
//
//  DESCRIPTION:
//   This is a header file for the file Charizard.cpp         
//
//
****************************************************************/

#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "Pokemon.h"
#include <string>

class Charizard : public Pokemon
{
    public:
        Charizard();
        ~Charizard();
        void printData();
};

#endif
