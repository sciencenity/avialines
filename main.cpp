#include"Header.h"
#include <iostream>
#include<list>
#include<string>


int main()
{
    std::list<order> j;
    order nOrder("ny", "john", " ", "l;", 1293);
    all smt(nOrder);
    bool y;
    std::cin >> y;
    // std::list<order> something;
    // smt.getAllOrders(something);
    nOrder.getOrder(nOrder);
    smt.getAllOrders(j);
}