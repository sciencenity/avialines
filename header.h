#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
template <typename T>
T print(T toPrint) {
	return toPrint;
}
class order {
public:
	order(std::string place, std::string name, std::string initials, std::string date, int number);
	order getOrder(order toWatch);
	std::string getAllInfo(order toGet);
private:
	std::string place, name, initials, date;
	int number;
};
class all {
public:
	friend class order;
	std::list<order> addOrder(order toAdd);
	all operator=(const all& r) {
		return this->allOrders = r.allOrders;
	}
	auto deleteOrder(std::list<int>& list1, int k);
	all(std::list<order> ordersAll);
	all setOrd(bool y, all toC);
	all(order order) {
		this->allOrders.push_back(order);
	}
	~all() {

	}
	void getAllOrders(std::list<order> orders);
	all getOrd(all orders) {
		//return orders;
	};
	

private:
	std::list<order> allOrders;
	std::unique_ptr<int> ptr;
	static int amount;
};
