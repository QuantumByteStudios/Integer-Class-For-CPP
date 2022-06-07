#include "Integer.hh"

int main()
{
  me.clear();
  Integer myNumber = 15;
  if (myNumber.isEven())
  {
    cout << myNumber.getValue() << " is even" << endl;
  }
  else
  {
    cout << myNumber.getValue() << " is odd" << endl;
  }
  return 0;
}