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
//  FILE:        Pokemon.h
//
//  DESCRIPTION:
//   This is a header file for the file Pokemon.cpp
//
//
****************************************************************/

#ifndef POKEMON_H
#define POKEMON_H

#include <string>

using namespace std;

class Pokemon
{
    protected:
        string type;
        float weight;
    public:
        Pokemon();
        ~Pokemon();
        virtual void printData() = 0;
};

#endif
