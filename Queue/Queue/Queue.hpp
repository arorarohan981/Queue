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
    /*
     Creates a Queue of Specified Size
     */
    Queue(size_t queueSize);
    /*Returns True if the Queue is Empty or else Returns False.*/
    bool isEmpty() const;
    
    /* Returns True if the Queue is Full or else Returns False */
    bool isFull() const;
    
    
    /* Enqueue the Element into the Queue.Returns True if the Element is inserted Successfully.
     Throws Overflow Exception if We try to Enqueue Element if the Queue is Full.*/
    bool enQueue(T data);
    
    
    /*Dequeue the Element from the Queue.Returns the Element.
     Throws Underflow Exception if we try to remove Element from the Queue if the Queue is Empty*/
   T deQueue();
    
    
    /*Displays All the Elements of the Queue.(In FIFO Order)*/
    void display() const;
};


template <typename T>
Queue<T>::Queue(size_t QueueSize){
    queueSize=QueueSize;
}


template <typename T>
bool Queue<T>::isEmpty() const{
    if(dataCount==-1){
        return true;
    }
    return false;
}


template <typename T>
bool Queue<T>::isFull() const{
    if(dataCount==queueSize-1){
        return true;
    }
    return false;
}

template <typename T >
bool Queue<T>::enQueue(T data){
    if(isFull()){
        throw std::overflow_error("Queue is Full ! We can't Add More Elements to the Queue !");
        return false;
    }
    dataCount++;
    listOfData.push_back(data);
    return true;
}

template <typename T>
T  Queue<T>::deQueue(){
    if(isEmpty()){
        throw std::underflow_error("Queue is Empty . WE can't remove any Elements from the Queue ");
    }
    T data = listOfData.back();
    dataCount--;
    return data;
}


template <typename T >
void Queue<T>::display() const{
    if(isEmpty()){
        std::cout<<"No Elements to Display !!!! Queue is Empty  "<<std::endl;
        return;
    }
    std::cout<<"Elements in the Queue are as Follows : "<<std::endl;
    auto queueIterator = listOfData.cbegin();
    while(queueIterator!=listOfData.cend()){
        std::cout<<*queueIterator<<std::endl;
        queueIterator++;
    }
}
}
#endif /* Queue_hpp */
