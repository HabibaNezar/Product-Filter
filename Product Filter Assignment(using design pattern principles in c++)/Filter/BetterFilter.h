#pragma once
#include "../Product/Product.h"
#include "../Specifier/Specifier.h"

#include <vector>

//follows Open-Closed Principle
//follow Dependency Inversion Principle
class BetterFilter
{
public:
	vector<Product> filterby(vector<Product> products, Specifier* specifier)
	{
		vector<Product> chosen_products;
		for(int i=0; i<products.size(); i++)
		{
			if(specifier->specify(products[i]))
				chosen_products.push_back(products[i]);
		}
		return chosen_products;
	}

	//follows Open-Closed Principle
	//BetterFilter class does not change with new policies
	//BetterFilter class is Closed for Modifications
	//					  but Open for Extensions
	
};
