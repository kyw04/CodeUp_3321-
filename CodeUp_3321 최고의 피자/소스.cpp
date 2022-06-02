#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, dough_price, topping_price, dough_calorie, price, calorie, maximum;

	cin >> n >> dough_price >> topping_price >> dough_calorie;
	vector<int> topping_calorie(n);

	for (auto& a : topping_calorie)
		cin >> a;

	sort(topping_calorie.begin(), topping_calorie.end(), greater<>());

	price = dough_price;
	calorie = dough_calorie;
	maximum = calorie / price;

	for (auto& a : topping_calorie)
	{
		price += topping_price;
		calorie += a;
		if (maximum < calorie / price)
			maximum = calorie / price;
	}

	cout << maximum;
	return 0;
}