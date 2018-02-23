/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByWeight.h
 * Author: rasu & mattw
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef PETDATABASESORTABLEBYWEIGHT_H
#define PETDATABASESORTABLEBYWEIGHT_H
#include "SortableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByWeight:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    PetDatabaseSortableByWeight(vector<Pet*>&){}
    Pet* getPet(int i){}
    PetDatabaseSortableByWeight(const PetDatabaseSortableByWeight& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    PetDatabaseSortableByWeight& operator=(const PetDatabaseSortableByWeight& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }    
};
#endif /* PETDATABASESORTABLEBYWEIGHT_H */

