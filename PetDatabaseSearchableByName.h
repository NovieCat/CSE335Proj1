/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSearchableByName.h
 * Author: rasu and mattw
 *
 * Created on February 12, 2018, 12:16 PM
 */

#ifndef PETDATABASESEARCHABLEBYNAME_H
#define PETDATABASESEARCHABLEBYNAME_H
#include <vector>
#include "Pet.h"
#include "SearchableVector.h"
using namespace std;
class PetDatabaseSearchableByName:  public SearchableVector{
protected: 
    vector<Pet*> pet_vec;
    unsigned int size;
    string Query;
public:
    PetDatabaseSearchableByName(PetDatabaseSearchableByName* i){}
    PetDatabaseSearchableByName(vector<Pet*>&){}
    //Pet getPet(int i){};
    void setQuery(string i){}
};


#endif /* PETDATABASESEARCHABLEBYNAME_H */

