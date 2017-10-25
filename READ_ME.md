
De Anza College CIS

Search this site
Home
CIS36A
CIS22C
CIS22A
Lab 5: Queue from 2 Stacks (100 pts)
Due Tuesday, October 31 at 11:20am on Canvas

Pair Programming Extra Credit Opportunity (5 pts)
If you and/or your partner has not done so already, watch the video and answer the questions on this worksheet (only one time per quarter).
Both partners fill in, sign and date the pair programming contract (once per assignment).
Upload the document(s) along with your Lab to Canvas.
Only ONE partner submits the lab assignment on Canvas. Please make sure both your names are on it.

Your Objective
Here is a common interview question: implement a queue using two stacks.
We will create an implementation of this interview question for Lab 5, and you will then be ready if you are asked this question on your next interview!
Given the below header file (must remain unchanged), write the Queue functions whose prototypes are provided in a file named Queue.cpp.
Test your functions inside a test file named QueueTest.cpp
Name your header file Queue.h and your source file Queue.cpp
These files should be placed inside of a C++ project in Eclipse, along with your Stack.h from Lab 3.


Queue.h

Copy and paste the below code into a file named Queue.h.
You are not permitted to alter anything about this file.
Note: This file is not to be submitted. 
The instructor will test your code using the below file. 
Thus, make sure your source code compiles with the given header file.


#ifndef QUEUE_H_
#define QUEUE_H_


#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

class Queue
{
    public:
       
        /**manipulation procedures*/

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


    private:
        Stack<string> s1;
        Stack<string> s2;

};



#endif /* QUEUE_H_ */




What to Submit

Submit your Stack.h, Queue.cpp and QueueTest.cpp files to Canvas when you are finished.
-15 points for a missing test file
-14 points for each missing or incorrect function
No credit if your code does not compile with the above header file.
No credit if your code does not compile.
Sign in|Recent Site Activity|Report Abuse|Print Page|Powered By Google Sites
