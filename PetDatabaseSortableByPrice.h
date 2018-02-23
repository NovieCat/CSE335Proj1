/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByPrice.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:15 PM
 */

#ifndef PETDATABASESORTABLEBYPRICE_H
#define PETDATABASESORTABLEBYPRICE_H
#include "SortableVector.h"
#include "Dog.h"
#include "Pet.h"
#include "Cat.h"
#include <vector>

using namespace std;
class PetDatabaseSortableByPrice:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    PetDatabaseSortableByPrice(vector<Pet*>&){}
    Pet* getPet(int i){}
    PetDatabaseSortableByPrice(const PetDatabaseSortableByPrice& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    PetDatabaseSortableByPrice& operator=(const PetDatabaseSortableByPrice& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }
};



#endif /* PETDATABASESORTABLEBYPRICE_H */

