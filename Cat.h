/* 
 * File:   Cat.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:13 PM
 */

#ifndef CAT_H
#define CAT_H

#include <iostream>

class Cat: public Pet{
protected:
    bool Fluffy;
    
public:
    //constructors
    Cat(){
        Name = "n/a";
        Type = "unknown";
        Weight = 0;
        Price = 0;
        Fluffy = true;
    }
    Cat(string newName, string newType, unsigned int newWeight, double newPrice, bool newFluffy){
        Name = newName;
        Type = newType;
        Weight = newWeight;
        Price = newPrice;
        Fluffy = newFluffy;
    }
    Cat(const Cat& baseCat){
        if (this != &baseCat){
            Name = baseCat.Name;
            Type = baseCat.Type;
            Weight = baseCat.Weight;
            Price = baseCat.Price;
            Fluffy = baseCat.Fluffy;
        }
    }
    Cat& operator=(const Cat& baseCat){
        if (this != &baseCat){
            Name = baseCat.Name;
            Type = baseCat.Type;
            Weight = baseCat.Weight;
            Price = baseCat.Price;
            Fluffy = baseCat.Fluffy;
        }
        return *this;
    }
    //destructor
    virtual ~Cat(){}
    
    //print
    void print(){
        printf("%-20s", "cat");
        printf("meow");
    }
};

#endif /* CAT_H */

