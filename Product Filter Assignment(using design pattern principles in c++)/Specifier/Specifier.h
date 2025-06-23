#pragma once
#include "../Product/Product.h"

//Abstraction
class Specifier
{
public:
	virtual bool specify(Product)=0;

	//follows Open-Closed Principle
	//new policy can be added by defining a NEW class that implements(inherits from) the abstract Specifier class
	//Specifier class is Open for Extensions
	//			   but Closed for Modifications

};
