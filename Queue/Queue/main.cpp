//
//  main.cpp
//  Queue
//
//  Created by Rohan Arora on 05/11/21.
//

#include <iostream>
#include "Queue.hpp"
int main(int argc, const char * argv[]) {
    
    mylib::Queue<int> intQueue{3};
    std::cout<<std::boolalpha<<"Is Queue Empty ? "<<intQueue.isEmpty()<<std::endl;
    std::cout<<"Is Queue Full ? "<<intQueue.isFull()<<std::endl;
//    intQueue.deQueue();
    intQueue.display();
    intQueue.enQueue(1);
    intQueue.enQueue(2);
    intQueue.enQueue(3);
//    intQueue.enQueue(4);
    intQueue.display();
    
    return 0;
}
