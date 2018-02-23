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
#include <vector>
#include "SortableVector.h"
#include "Pet.h"
using namespace std;
class PetDatabaseSortableByName:  public SortableVector{
protected: 
    vector<Pet*> pet_vec;
public:
    //constructors
    PetDatabaseSortableByName(vector<Pet*>&){}
    
    PetDatabaseSortableByName(const PetDatabaseSortableByName& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
    }
    PetDatabaseSortableByName& operator=(const PetDatabaseSortableByName& vec1){
        if (this != &vec1){
            pet_vec = vec1.pet_vec;
        }
        return *this;
    }
    
    //destructor
    virtual ~PetDatabaseSortableByName(){}
    
    //virtual function implementation
    virtual unsigned int getSize() const {
        return pet_vec.size();
    }
    
    virtual bool smaller(int i, int j) const{
        if(pet_vec[i] < pet_vec[j])
            return true;
        else
            return false;
    }
    
    virtual void swap(int i, int j){
        int temp = pet_vec[i];
        pet_vec[i]=pet_vec[j];
        pet_vec[j]=temp;
    }
    
    virtual void DisplayRecords() {
        //call print of pet
    }
    
    Pet* getPet(int i){
        if (i >= pet_vec.size()){
            cout << "Index exceeds size of vector; returning 0" << endl;
            return 0;
        }
        return pet_vec[i];
    }
};
 

#endif /* PETDATABASESORTABLEBYNAME_H */

