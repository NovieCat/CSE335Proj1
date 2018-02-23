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
    //constructors
    PetDatabaseSortableByPrice(vector<Pet*>&){}
    
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
    
    //destructor
    virtual ~PetDatabaseSortableByPrice(){}
    
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



#endif /* PETDATABASESORTABLEBYPRICE_H */

