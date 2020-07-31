#ifndef SQUARE_H
#define SQUARE_H
#include<iostream>
class Square
{
private:
  std::string m_space = "[__]";

public:
  Square ();
  std::string insert_space();
};
#endif
