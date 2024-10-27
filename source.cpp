#include "Header.h"
#include <iostream>

order::order(std::string place, std::string name, std::string initials, std::string date, int number) {
	if (number != 0) {
		std::cout << "object initialized correctly";
	}
	else {
		std::cout << "object initialized inncorrectly";
	}
};
order order::getOrder(order toWatch) {
	std::cout << "date: " << this->date
		<< "number: " << this->number
		<< "initials: " << this->initials
		<< "name: " << this->name
		<< "place: " << this->place;
	return toWatch;
}
 std::string order::getAllInfo(order toGet) {
	/*std::cout << this->date;
	std::cout << this->initials;
	std::cout << this->number;
	std::cout << this->place;
	std::cout << this->name;*/
	 std::string datee;
	 this->date = datee;
	 std::cout << datee;
	 std::cout << "---------" << std::endl;
	 return datee;
}
std::list<order> all::addOrder(order toAdd) {
	allOrders.push_back(toAdd);
	return allOrders;
};
auto all::deleteOrder(std::list<int>& list1, int k) {
	std::list<int>::iterator it = list1.begin();
	std::advance(it, k);
	if (it != list1.end())
	{
		return list1.erase(it);
	}
	return it;
}
void all::getAllOrders(std::list<order> orders) {
	orders = this->allOrders;
	std::cout << "amount of all orders: " << orders.size();
	for (auto iter = orders.begin(); iter != orders.end(); iter++)
	{
		//orders.
		//print(iter);
	}
}
int all::amount;
all::all(std::list<order> ordersAll) {
	ordersAll = this->allOrders;
	this->amount++;
}

//all all::setOrd(bool y, all toC) {
//	if (y == true) {
//		all tCh(order neword);
//		int number;
//		std::string date, name, initials, place;
//		std::cin >> number;
//		std::cin >> date;
//		std::cin >> initials;
//		std::cin >> place;
//		std::cin >> name;
//		order neword(place, name, initials, date, number);
//		toC.allOrders = tCh.allOrders;
//		tCh.addOrder(neword);
//		//return toCh;
//		std::list<order> f;
//		tCh.getAllOrders(f);
//		return tCh;
//	}
//	else {
//		std::cout << "Bye. Thanks";
//		//return 0;
//	}
//};


