/*
 * Queue.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */


# include "Queue.h"

/************* manipulation procedures *************/
void Queue::enqueue(string data)
{
	s1.push(data);
}

void Queue::dequeue()
{
	assert(!empty());
	if (!s2.empty()) s2.pop();
	else
	{
		while (!s1.empty())
		{
			s2.push(s1.peek());
			s1.pop();
		}
		s2.pop();
	}
}


/************* Accessors *************/

int Queue::getSize()
{
	return s1.getSize() + s2.getSize();
}



bool Queue::empty()
{
	return s1.empty() && s2.empty();
}

string Queue::getFront()
{
	assert(!empty());
	if (!s2.empty()) return s2.peek();
	else
	{
		while(!s1.empty())
		{
			s2.push(s1.peek());
			s1.pop();
		}
		return s2.peek();
	}
}

/************* additional queue operations *************/
void Queue::print()
{
	s2.print();
	s1.reversePrint();

}
