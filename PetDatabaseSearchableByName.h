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
    PetDatabaseSortableByName *NameVec;
    double Query;
public:
    //constructors
    PetDatabaseSearchableByName(){
        Query = 0;
    }
    PetDatabaseSearchableByName(PetDatabaseSortableByName *newNameVec){
        NameVec = newNameVec; //implement this operator
        Query = 0;
    }
    
    //destructor
    virtual ~PetDatabaseSearchableByName(){
        delete NameVec;
    }
    
    //virtual implementation
    virtual int getSize()const{
        return NameVec->getSize();
    }
    
    virtual int compareAt(int i)const{
        if (i > Query)
            return 1;
        else if (i == Query)
            return 0;
        else
            return -1;
    }
    
    //other functions
    void setQuery(double newQuery){
        Query = newQuery;
    }
    
    Pet getPet(int i){
        return NameVec->getPet(i);
    }
};


#endif /* PETDATABASESEARCHABLEBYNAME_H */

