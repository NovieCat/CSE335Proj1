/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByType.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:15 PM
 */

#ifndef PETDATABASESORTABLEBYTYPE_H
#define PETDATABASESORTABLEBYTYPE_H
#include "SortableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByType:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
    
public:
    PetDatabaseSortableByType(vector<Pet*>&){}
    Pet* getPet(int i){}
    PetDatabaseSortableByType(const PetDatabaseSortableByType& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    PetDatabaseSortableByType& operator=(const PetDatabaseSortableByType& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }
};


#endif /* PETDATABASESORTABLEBYTYPE_H */

