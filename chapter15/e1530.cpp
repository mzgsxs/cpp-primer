#include"Basket.h"

int main(int argc, char** argv){

Basket b;
//b.add_item(std::make_shared<Quote>("book", 13.99));
//b.add_item(std::make_shared<Quote>("book2", 9.99));
Quote q("book3", 5.99);
Bulk_quote bq("bulk book", 15.99, 1 , 0.8);

b.add_item(bq);

print_total(cout, bq, 1);

b.total_receipt(cout);
}
