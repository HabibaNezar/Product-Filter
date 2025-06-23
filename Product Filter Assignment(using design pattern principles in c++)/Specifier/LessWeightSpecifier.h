#pragma once
#include "Specifier.h"
#include "../Product/Product.h"

//implements the abstract Speifier
//check if the weight of the product is less than a specific value
class LessWeightSpecifier: public Specifier
{
public:
	float chosen_weight;
	LessWeightSpecifier(float w) { chosen_weight=w; }
	bool specify(Product p)
	{
		return p.weight<chosen_weight;
	}
};
