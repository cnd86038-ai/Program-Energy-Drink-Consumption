#include <iostream>
using namespace std;

int main()
{
	int TOTAL_CUSTOMERS = 16500;
	int PERCENT_ENERGY_DRINKS = 15;
	int PERCENT_CITRUS_FLAVOR = 58;

	int customers_energy_drinks = TOTAL_CUSTOMERS * (PERCENT_ENERGY_DRINKS / 100);
	int customers_citrus_flavor = customers_energy_drinks * (PERCENT_CITRUS_FLAVOR / 100);

	cout << "Number of energy drink customers per week:" << customers_energy_drinks << endl;
	cout << "Number of energy drink customers who prefer citrus flavor:" << customers_citrus_flavor << endl;
}