#include "../Integer.hh"

int main()
{
  me.clear();

  // Legal values
  /*
    Assigned Proper Values
  */
  Integer myNumber;
  myNumber.setMinMax(0, 100);
  myNumber.setValue(50);
  myNumber.printValue();

  // Illegal values
  /*
    Assigned Improper Values, Returns Error
  */
  Integer badNumber, otherBadNumber;
  badNumber.setMinMax(18, 55);
  otherBadNumber.setMinMax(18, 55);
  // Try To Set Illegal Values
  badNumber.setValue(4);
  otherBadNumber.setValue(96);

  return 0;
}