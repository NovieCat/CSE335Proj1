/* 
 * File:   Dog.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog: public Pet{
protected:
    string Category;
    
public:
    //constructors
    Dog(){
        Name = "n/a";
        Type = "unknown";
        Weight = 0;
        Price = 0;
        Category = "none";
    }
    Dog(string newName, string newType, unsigned int newWeight, double newPrice, string newCategory){
        Name = newName;
        Type = newType;
        Weight = newWeight;
        Price = newPrice;
        Category = newCategory;
    }
    Dog(const Dog& baseDog){
        if (this != &baseDog){
            Name = baseDog.Name;
            Type = baseDog.Type;
            Weight = baseDog.Weight;
            Price = baseDog.Price;
            Category = baseDog.Category;
        }
    }
    Dog& operator=(const Dog& baseDog){
        if (this != &baseDog){
            Name = baseDog.Name;
            Type = baseDog.Type;
            Weight = baseDog.Weight;
            Price = baseDog.Price;
            Category = baseDog.Category;
        }
        return *this;
    }
    //destructor
    virtual ~Dog(){}
    
    //print
    void print(){
        printf("%-20s", "cat");
        printf("meow");
    }
};

#endif /* DOG_H */

