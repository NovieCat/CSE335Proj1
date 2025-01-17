/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sortable Vector.h
 * Author: mattw & rasu
 *
 * Created on February 12, 2018, 5:00 PM
 */
// USED CODE GIVEN IN HOMEWORK AND LECTURES

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector{
public:
    virtual unsigned int getSize() const = 0;
    virtual bool smaller(int i, int j) const = 0;
    virtual void swap(int i, int j) = 0;
    virtual void DisplayRecords() =0;
};

#endif /* SORTABLEVECTOR_H */

