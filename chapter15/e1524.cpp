/*
virtual destructor is needed if we will ever 
delete a base class pointer that points to a derived class
i.e. 

Base * p = new Derived;
delete p;

if:
Derived d;
Base * pb = &d;
In this case, we dont need to delete pb as no dynamic memory was assigned

*/
