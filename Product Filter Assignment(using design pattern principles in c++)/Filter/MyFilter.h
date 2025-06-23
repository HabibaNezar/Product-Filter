#pragma once
#include "../Product/Product.h"

#include <vector>

//violates Open-Closed Principle
class MyFilter
{
public:
	vector<Product> filterby_color(vector<Product> products,char chosen_color)
	{
		vector<Product> chosen_products;
		for(int i=0; i<products.size(); i++)
		{
			if(products[i].color==chosen_color)
				chosen_products.push_back(products[i]);
		}
		return chosen_products;
	}

	vector<Product> filterby_lessweight(vector<Product> products,float chosen_weight)
	{
		vector<Product> chosen_products;
		for(int i=0; i<products.size(); i++)
		{
			if(products[i].weight<chosen_weight)
				chosen_products.push_back(products[i]);
		}
		return chosen_products;
	}

	//each new filter policy leads to new modifications on MyFilter class (unstable)
	//Myfilter class is NOT closed for modifications
	//violates Open-Closed Principle

};
