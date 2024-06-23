#include<string>
#include<iostream>

class Account {
public:
  void calculate() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double);

  static constexpr int period = 30;
  double daily_tbl[period];
  
private:
  std::string owner;
  double amount;
  static double interestRate; //only declaration
  static double initRate();

};

// definition here
double Account::interestRate = initRate();
constexpr int Account::period; // !!!! this is necessary for function foo
// we dont need it for cout for some reason?

// static keyword only in declaration
void Account::rate(double newRate)
{
  interestRate = newRate;
}

double Account::initRate()
{
  return 0.;
}


void foo(int const & ci){}


int main(){
  foo(Account::period);
  std::cout << Account::period << std::endl;
}
