/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PetDatabaseSortableByName.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef PETDATABASESORTABLEBYNAME_H
#define PETDATABASESORTABLEBYNAME_H
#include "SortableVector.h"
#include <vector>
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByName:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    PetDatabaseSortableByName(vector<Pet*>&){}
    Pet* getPet(int i){}
    /*
    virtual void swap(int i, int j){
        Pet temp = pet_vec[i];
        pet_vec[i]=pet_vec[j];
        pet_vec[j]=Pet;
    }/
    */
};
 

#endif /* PETDATABASESORTABLEBYNAME_H */

