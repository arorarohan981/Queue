//
//  Queue.hpp
//  Queue
//
//  Created by Rohan Arora on 05/11/21.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <memory>
#include <iostream>
#include <exception>
#include <list>


namespace mylib{
/*Queue Works On the Principle on First In First Out**/
template <typename T>
class Queue{
private:
    size_t queueSize;
    std::list<T> listOfData;
    int dataCount{-1};
public:
    /*Returns True if the Queue is Empty or else Returns False.*/
    bool isEmpty() const;
    
    /* Returns True if the Queue is Full or else Returns False */
    bool isFull() const;
    
    
    /* Enqueue the Element into the Queue.Returns True if the Element is inserted Successfully.
     Throws Overflow Exception if We try to Enqueue Element if the Queue is Full.*/
    bool enQueue();
    
    
    /*Dequeue the Element from the Queue.Returns the Element.
     Throws Underflow Exception if we try to remove Element from the Queue if the Queue is Empty*/
   T deQueue();
    
    
    /*Displays All the Elements of the Queue.(In FIFO Order)*/
    void display() const;
};


}
#endif /* Queue_hpp */
