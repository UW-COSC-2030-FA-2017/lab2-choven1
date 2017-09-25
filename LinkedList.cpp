// LinkedList.cpp
// Corey Hoven
// COSC 2030
// 9 September 2017

// Definition of methods for the List class.

#include "LinkedList.h"

#include <utility>


List::List()
	: first_(NULL)
{
}


List::List(const List & other)
	: first_(clone(other.first_))
{
}


List::~List()
{
	while (!empty())
	{
		removeFirst();
	}
}


const List & List::operator=(const List & other)
{
	// check for list = list
	if (&other != this)
	{
		// clear the current contents of this List
		this -> ~List();
		// and get a copy of other
		first_ = clone(other.first_);
	}

	return *this;
}


bool List::empty() const
{
	return first_ == NULL;
}


void List::insertAsFirst(double x)
{
	first_ = new Node(x, first_);
}


double List::removeFirst()
{
	double item = first_->entry_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	delete tempPtr;
	return item;
}


int List::Size() const
{
    int LSize=0;
	if (!empty())
	{
		Node * ptr = first_->next_;
		LSize ++;

		while (ptr != NULL)
		{
			ptr = ptr->next_;
			LSize ++;

		}
	}
	return LSize;
}


double List::sum()
{
	double sumTemp=0;
	if (!empty())
	{
		sumTemp += first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			sumTemp += ptr->entry_;
			ptr = ptr->next_;
		}
	}
	return sumTemp;
}


void List::insertAsLast (double x)
{
	if (!empty())
	{
	    Node * temp = new Node(x);
	    //int lastPrev = Size();
        Node * last = first_;
        while (last->next_)
        {
            last = last->next_;
        }
            last->next_ = temp;
	}
	else
    {
       first_ = new Node(x, first_);
    }

}

void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		// The first entry is printed separately because no comma
		// is needed.
		outfile << first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			outfile << ", " << ptr->entry_;
			ptr = ptr->next_;
		}
	}
	outfile << " ]";
}


// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
	if (ptr == NULL)
	{
		return NULL;
	}
	Node * first = new Node(ptr->entry_);
	Node * last = first;
	ptr = ptr->next_;
	while (ptr != NULL)
	{
		last->next_ = new Node(ptr->entry_);
		last = last->next_;
		ptr = ptr->next_;
	}
	return first;
}


//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}


