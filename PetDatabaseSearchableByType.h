/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByType.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:17 PM
 */

#ifndef PETDATABASESEARCHABLEBYTYPE_H
#define PETDATABASESEARCHABLEBYTYPE_H
#include "SearchableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSearchableByType:  public SearchableVector{
protected: 
    vector<Pet*> pet_vec;
    unsigned int size;
    string Query;
public:
    PetDatabaseSearchableByType(vector<Pet*>&){}
    void setQuery(string i){}
};


#endif /* PETDATABASESEARCHABLEBYTYPE_H */

