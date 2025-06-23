#pragma once
#include "Specifier.h"
#include "../Product/Product.h"

//implements the abstract Speifier
//check if the product has a specific color
class ColorSpecifier: public Specifier
{
public:
	char chosen_color;
	ColorSpecifier(char c) { chosen_color=c; }
	bool specify(Product p)
	{
		return p.color==chosen_color;
	}
};
