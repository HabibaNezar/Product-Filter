#include "./Product/Product.h"
#include "./Product/ProductReporter.h"
#include "./Filter/BetterFilter.h"
#include "./Specifier/ColorSpecifier.h"
#include "./Specifier/LessWeightSpecifier.h"
#include "./Specifier/AndSpecifier.h"
#include "./Specifier/OrSpecifier.h"

#include <vector>

int main()
{
	// intialize a list of all products
	vector<Product> all_products;
	all_products.push_back(Product("product1", 'b', 15));
	all_products.push_back(Product("product2", 'b', 25));
	all_products.push_back(Product("product3", 'g', 15));
	all_products.push_back(Product("product4", 'r', 30));
	all_products.push_back(Product("product5", 'g', 25));

	ProductReporter r;
	cout << "all products: \n";
	r.report_all(all_products);

	BetterFilter filter;
	// get a list of products that have a blue('b') color
	vector<Product> blue_products =
		filter.filterby(all_products, new ColorSpecifier('b'));
	cout << "blue products: \n";
	r.report_all(blue_products);

	// get a list of products that have a weight less than 20
	vector<Product> lightweight_products =
		filter.filterby(all_products, new LessWeightSpecifier(20));
	cout << "lightweight products: \n";
	r.report_all(lightweight_products);

	// get a list of products that have a blue('b') color and a weight less than 20
	cout << "blue lightweight products: \n";
	vector<Product> blue_light_products =
		filter.filterby(all_products, new AndSpecifier(
										  new ColorSpecifier('b'), new LessWeightSpecifier(20)));
	r.report_all(blue_light_products);

	// get a list of products that have a green('g') color or a weight less than 20
	cout << "green or lightweight products: \n";
	vector<Product> green_or_light =
		filter.filterby(all_products, new OrSpecifier(
										  new ColorSpecifier('g'), new LessWeightSpecifier(20)));
	r.report_all(green_or_light);

	return 0;
}
