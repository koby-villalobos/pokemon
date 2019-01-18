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
//  FILE:        Dragonite.cpp
//
//  DESCRIPTION:
//   This file is a child class of Pokemon, that holds
//   info for the pokemon "Dragonite".
//
//
****************************************************************/

#include <string>
#include <iostream>
#include "Dragonite.h"

/*****************************************************************
//
//  Function name: Dragonite
//
//  DESCRIPTION:   A constructor for the Dragonite class.
//
//  Parameters:    N/A                                           
//
//  Return values:  N/A        
//
****************************************************************/

Dragonite :: Dragonite()
{
    this -> type = "Dragon";
    this -> weight = 463.0;
}

/*****************************************************************
//
//  Function name: ~Dragonite
//
//  DESCRIPTION:   A destructor for the Dragonite class.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

Dragonite :: ~Dragonite()
{
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A Function that prints info about the  
//     	       	       	pokemon	"Dragonite".
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

void Dragonite :: printData()
{
    cout << "The Pokemon's name: Dragonite \n";
    cout << "The Pokemon's type: " << this -> type << "\n";
    cout << "The Pokemon's weight: " << this -> weight << "\n\n";
}


