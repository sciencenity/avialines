#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
template <typename T>
void print(T toPrint) {
	std::cout << toPrint;
}
class order {
public:
	order(std::string place, std::string name, std::string initials, std::string date, int number) {
		if (number !=0) {
			std::cout << "object initialized correctly";
		}
		else {
			std::cout << "object initialized inncorrectly";
		}

	}
	order getOrder(order toWatch) {
		std::cout << "date: " << this->date 
			<<"number: "<< this->number 
			<< "initials: " << this->initials
			<<"name: "<< this->name 
			<<"place: " << this->place;

	}
private:
	std::string place, name, initials, date;
	int number;
};
class all {
public:
	std::list<order> addOrder(order toAdd) {
		allOrders.push_back(toAdd);
		return allOrders; 
	};
	auto deleteOrder(std::list<int>& list1, int k)
	{
		std::list<int>::iterator it = list1.begin();
		std::advance(it, k);
		if (it != list1.end())
		{
			return list1.erase(it);
		}
		return it;
	}
	all(std::list<order> ordersAll) {
		ordersAll = this->allOrders;
	}
	all(order order) {
		this->allOrders.push_back(order);
	}
	~all() {

	}
	void getAllOrders(std::list<order> orders) {
		orders = this->allOrders;
		std::cout << "amount of all orders: " << orders.size();
		for (auto iter = orders.begin(); iter != orders.end(); iter++)
		{
			print(iter);
		};
	
	};
private:
	std::list<order> allOrders;
};