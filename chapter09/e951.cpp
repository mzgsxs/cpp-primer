#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;

#include<iostream>
using std::cin;
using std::cout;
using std::endl;


template<class T>
void print(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " | ";
  }
  cout << endl;
}


struct Date {
  Date(string const & sdate){
    string::size_type pos = sdate.find_first_not_of(dim);
    string::size_type pos2 = sdate.find_first_of(dim, pos+1);
    if (pos2 != string::npos)
      dm = sdate.substr(pos, pos2-pos);

    pos = sdate.find_first_not_of(dim, pos2);
    pos2 = sdate.find_first_of(dim, pos+1);
    if (pos2 != string::npos)
      dd = sdate.substr(pos, pos2-pos);

    pos = sdate.find_first_not_of(dim, pos2);
    pos2 = sdate.find_first_of(dim, pos+1);
    dy = sdate.substr(pos);

    year = stoi(dy);
    day = stoi(dd);
    if (dm.find_first_of(numbers) == string::npos)
      month = 0; // get numerical month number from string such as 'Jan'
    else
     month = stoi(dm);
  }
  string numbers{"0123456789"}; 
  string dim{"/ ,"}; 
  string dd, dm, dy;
  unsigned year, month, day;
};


int main(){
  string sdate{"1/12/1900"}; 
  //string sdate{" January 1, 1900 "}; 
  //string sdate{" Jan 1 1900"}; 
  Date d(sdate);
  cout << d.dd << "|" << d.dm << "|" << d.dy << endl;
  cout << d.day << "|" << d.month << "|" << d.year << endl;
}
