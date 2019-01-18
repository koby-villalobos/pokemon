/*****************************************************************
//
//  NAME:        Koby Villalobos
//
//  HOMEWORK:    10
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        December 5, 2018
//
//  FILE:        Charizard.cpp
//
//  DESCRIPTION:
//   This file is a child class of Pokemon, that holds
//   info for the pokemon "Charizard".
//
//
****************************************************************/

#include <string>
#include <iostream>
#include "Charizard.h"

/*****************************************************************
//
//  Function name: Charizard
//
//  DESCRIPTION:   A constructor for the Charizard class.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

Charizard :: Charizard()
{
    this -> type = "fire";
    this -> weight = 199.5;
}

/*****************************************************************
//
//  Function name: ~Charizard
//
//  DESCRIPTION:   A destructor for the Charizard class.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

Charizard :: ~Charizard()
{
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A Function that prints info about the 
//                      pokemon "Charizard".
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

void Charizard :: printData()
{
    cout << "The Pokemon's name: Charizard \n";
    cout << "The Pokemon's type: " << this -> type << "\n";
    cout << "The Pokemon's weight: " << this -> weight << "\n\n";
}
