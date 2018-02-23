/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByWeight.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:17 PM
 */

#ifndef PETDATABASESEARCHABLEBYWEIGHT_H
#define PETDATABASESEARCHABLEBYWEIGHT_H

#include "SearchableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSearchableByWeight:  public SearchableVector{
protected: 
    vector<Pet*> pet_vec;
    unsigned int size;
    double Query;
public:
    PetDatabaseSearchableByWeight(vector<Pet*>&){}
    void setQuery(double i){}
    
    
};

#endif /* PETDATABASESEARCHABLEBYWEIGHT_H */

