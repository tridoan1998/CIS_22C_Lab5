#ifndef QUEUE_H_
#define QUEUE_H_


#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template <class stackdata>
class Queue
{
private:
    struct Node
        {
            stackdata data;
            Node* link;
    
            Node(stackdata newdata)
                {
                    data = newdata;
                    top = NULL;
                }
            Node* top;
            int size;
        }
    Stack<string> s1;
    Stack<string> s2;
public:
       
        /**manipulation procedures*/

    `   
        void dequeue();
        //removes an element from the front of the queue
        //precondition: the queue isn't empty
        //postcondition: an element has been removed from the front of the queue

        void enqueue(string data);
        //adds an element to the end of the queue
        //postcondition: an element added to the end of the queue

        /**accessors*/

        string getFront();
        //returns the element at the front of the queue
        //precondition: the queue is not empty

        int getSize();
        //returns the size of the queue

        bool empty();
        //returns whether the queue is empty

        /**additional queue operations*/
        void print();
        //prints the elements in the queue to stdout
};

template <class listdata>
void Stack<listdata>::dequeue()
{
    
}



#endif /* QUEUE_H_ */

