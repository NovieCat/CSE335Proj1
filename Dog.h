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
        printf("%-10s", "Category:");
        printf("%-9s", Category);
    }
    
    //get/set Category
    string GetCategory(){
        return Category;
    }
    
    void SetCategory(bool newCategory){
        Category = newCategory;
    }
};

#endif /* DOG_H */

