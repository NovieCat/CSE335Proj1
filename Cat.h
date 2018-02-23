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
    virtual void print() const {
        printf("%-7s" , "Name:");
        printf("%-8s" , Name);
        printf(" ");
        printf("%-7s" , "Type:");
        printf("%-10s" , Type);
        printf("%-8s" , "Weight:");
        printf("%-3i" , (int)Weight);
        printf("%-6s", "Price: ");
        printf("%-7F", Price);
        printf("%-10s", "Fluffy:");
        printf("%-9s", Fluffy);
    }
    
    //get/set fluffy
    bool GetFluffy(){
        return Fluffy;
    }
    
    void SetFluffy(bool newFluffy){
        Fluffy = newFluffy;
    }
};

#endif /* CAT_H */

