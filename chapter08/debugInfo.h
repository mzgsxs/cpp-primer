
#include<string>

#include<iostream>
#include<fstream>
#include<sstream>


namespace debugInfo {


template <typename T> 
std::string debug_rep
(T const & t)
{
  std::ostringstream ret; // see § 8.3 (p. 321)
  ret << t; // uses T’s output operator to print a representation of t
  return ret.str(); // return a copy of the stringto which retis bound
}


template <typename T> 
std::string debug_rep
(T * p)
{
  std::ostringstream ret;
  ret << "pointer: " << p; 
  if (p)
    // print the pointer’s own value
    ret << " " << debug_rep(*p); // print the value to which ppoints
  else
    ret << " null pointer"; // or indicate that the pis null

  return ret.str(); // return a copy of the stringto which retis bound
}


std::string debug_rep
(std::string const & s)
{
  return '"' + s + '"';
}


std::string debug_rep
(char * p)
{
  return debug_rep(std::string(p));
}


std::string debug_rep
(char const * p)
{
  return debug_rep(std::string(p));
}


template<typename T>
std::ostream & print
(std::ostream & os, T const & t)
{
  return os << t << std::endl; // no separator after the last element in the pack
}


template <typename T, typename... Args>
std::ostream & print
(std::ostream & os, T const & t, Args const & ... rest)// expand Args
{
  os << t << "| ";
  return print(os, rest...); // expand rest
}


template <typename ... Args>
std::ostream & log
(std::ostream & os, Args const & ... rest)
{
  return print(os, debug_rep(rest)...);  
}


/*
    std::cerr 
      << "DEBUG INFO - " << __FILE__
      << " : in function " << __func__
      << " at line " << __LINE__ 
      << std::endl
      << " Compiled on " << __DATE__
      << " at " << __TIME__ 
      << std::endl
    << std::endl;
*/



}
