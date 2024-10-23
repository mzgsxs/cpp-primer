#ifndef BASKET_H
#define BASKET_H

#include"Quote.h"
#include<memory>
#include<set>

class Basket{
public:
  // unintuitive method
  void add_item(std::shared_ptr<Quote> const & sale)
    { items.insert(sale); }
  // more intuitive
  /* 
    sale maybe a reference to a stack variable 
    if we do not make a virtual clone, Quote object will be sliced down   
  */
  void add_item(Quote const & sale){
    cout<<"add_item Quote const &"<<endl;
    // this is legal but causes slice down
    //items.insert(std::make_shared<Quote>(sale)); 
    items.insert(std::shared_ptr<Quote>(sale.clone())); 
  }
  void add_item(Quote && sale){
    cout<<"add_item Quote &&"<<endl;
    items.insert(std::shared_ptr<Quote>(std::move(sale.clone())));
  }
  // 
  double total_receipt(std::ostream&) const;

private:
  static bool compare(const std::shared_ptr<Quote> &lhs,
                      const std::shared_ptr<Quote> &rhs)
    { return lhs->isbn() < rhs->isbn(); }
  std::multiset<std::shared_ptr<Quote>, decltype(compare)*>
    items{compare};
};

double Basket::total_receipt(ostream &os) const
{
  double sum = 0.0;
  for (auto iter = items.cbegin();
    iter != items.cend();
    iter = items.upper_bound(*iter)) {
    sum += print_total(os, **iter, items.count(*iter));
  }
  os << "Total Sale: " << sum << endl;
  return sum;
}


#endif
