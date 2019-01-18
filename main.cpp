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
//  FILE:        main.cpp
//
//  DESCRIPTION:
//   This file contains the "driver" and stores Pokemon
//   objects into a vector and map.
//
//
****************************************************************/

#include <iterator>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Charizard.h"
#include "Gengar.h"
#include "Dragonite.h"

void checkPokedex(Pokemon *);

using namespace std;

/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   A constructor for the Charizard class.
//
//  Parameters:    N/A
//
//  Return values:  1 : always
//
****************************************************************/

int main()
{
    Charizard charzard;
    Gengar gang;
    Dragonite drag;
    vector<Pokemon*> myVector;    
    vector<Pokemon*> :: iterator ptr;
    std :: map<std :: string, Pokemon*> myMap;
    std :: map<std :: string, Pokemon*> :: iterator it;

    myVector.push_back(&charzard);
    myVector.push_back(&gang);
    myVector.push_back(&drag);
    myMap["char"] = &charzard;
    myMap["gengar"] = &gang;
    myMap["dragonite"] = &drag;

    cout << "We are now accessing the Vector: \n";
    for(ptr = myVector.begin(); ptr < myVector.end(); ptr++)
    {
        checkPokedex(*ptr);
    }
    cout << "\n";
    cout << "We are now accessing the Map:  \n";
    for(it = myMap.begin(); it != myMap.end(); ++it)
    {
        checkPokedex(it -> second);
    }
    return 1;
}

/*****************************************************************
//
//  Function name: checkPokedex
//
//  DESCRIPTION:   A function that calls printData(); for a given
//                      Pokemon
//
//  Parameters:    pokemon (Pokemon *) : address of a pokemon
//                      that will be used to call printData();
//
//  Return values:  N/A
//
****************************************************************/

void checkPokedex(Pokemon *pokemon)
{
    pokemon->printData();
}
