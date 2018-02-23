/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByPrice.h
 * Author: rasu 
 *
 * Created on February 12, 2018, 12:16 PM
 */

#ifndef PETDATABASESEARCHABLEBYPRICE_H
#define PETDATABASESEARCHABLEBYPRICE_H
#include "SearchableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSearchableByPrice:  public SearchableVector{
protected: 
    vector<Pet*> pet_vec;
    unsigned int size;
    double Query;
public:
    PetDatabaseSearchableByPrice(PetDatabaseSearchableByPrice*){}
    PetDatabaseSearchableByPrice(vector<Pet*>&){}
    void setQuery(double i){}
    
    Pet getPet(int i){}
};


#endif /* PETDATABASESEARCHABLEBYPRICE_H */

