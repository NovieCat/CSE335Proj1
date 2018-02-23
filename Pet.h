/* 
 * File:   Pet.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:13 PM
 */

#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet{
protected:
    string Name;
    string Type;
    unsigned int Weight;
    double Price;
    
public:
    //constructors
    Pet(){
        Name = "n/a";
        Type = "unknown";
        Weight = 0;
        Price = 0;
    }
    Pet(string newName, string newType, unsigned int newWeight, double newPrice){
        Name = newName;
        Type = newType;
        Weight = newWeight;
        Price = newPrice;
    }
    Pet(const Pet& basePet){
        if (this != &basePet){
            Name = basePet.Name;
            Type = basePet.Type;
            Weight = basePet.Weight;
            Price = basePet.Price;
        }
    }
    Pet& operator=(const Pet& basePet){
        if (this != &basePet){
            Name = basePet.Name;
            Type = basePet.Type;
            Weight = basePet.Weight;
            Price = basePet.Price;
        }
        return *this;
    }
    //destructor
    virtual ~Pet(){}
    
    //getters
    string GetName(){
        return Name;
    }
    string GetType(){
        return Type;
    }
    unsigned int GetWeight(){
        return Weight;
    }
    double GetPrice(){
        return Price;
    }
    
    //print
    virtual void print() const = 0;
};

#endif /* PET_H */

