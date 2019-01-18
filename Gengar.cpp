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
//  FILE:        Gengar.cpp
//
//  DESCRIPTION:
//   This file is a child class of Pokemon, that holds
//   info for the pokemon "Gengar".
//
//
****************************************************************/

#include <string>
#include <iostream>
#include "Gengar.h"

/*****************************************************************
//
//  Function name: Gengar
//
//  DESCRIPTION:   A constructor for the Gengar class.
//
//  Parameters:    N/A                                           
//
//  Return values:  N/A        
//
****************************************************************/

Gengar :: Gengar()
{
    this -> type = "Dark";
    this -> weight = 89.3;
}

/*****************************************************************
//
//  Function name: ~Gengar
//
//  DESCRIPTION:   A destructor for the Gengar class.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

Gengar :: ~Gengar()
{
}

/*****************************************************************
//
//  Function name: printData
//
//  DESCRIPTION:   A Function that prints info about the  
//     	       	       	pokemon	"Gengar".
//
//  Parameters:    N/A
//
//  Return values:  N/A
//
****************************************************************/

void Gengar :: printData()
{
    cout << "The Pokemon's name: Gengar \n";
    cout << "The Pokemon's type: " << this -> type << "\n";
    cout << "The Pokemon's weight: " << this -> weight << "\n\n";
}




