#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#ifdef _WIN32
#include <conio.h>
#elif __linux__
#include <terminos.h>
#elif __unix__
#include <terminos.h>
#else
#endif
using namespace std;

// Color Codes
// From: https://github.com/QuantumByteStudios/curses/
#define RESET "\033[0m"
#define RED "\033[31m"   /* Red */
#define GREEN "\033[32m" /* Green */

class Main
{
public:
  void clear()
  {
#ifdef _WIN32
    // Your Code Here for Windows
    system("cls");
#elif __linux__
    // Your Code Here for Linux
    system("clear");
#elif __unix__
    // Your Code Here for Linux
    system("clear");
#else
    printf("Error!");
#endif
  }
  void print(string stRing)
  {
    cout << stRing;
  }
  void print(string stRing, string COLOR)
  {
    cout << COLOR << stRing << RESET;
  }
} me;

class Integer
{
private:
  int Value;

public:
  int min = 0, max = 0;

  Integer()
  {
    Value = 0;
  }
  Integer(int num)
  {
    Value = num;
  }

  void checkMinMax(int num)
  {
    if (num >= min && num <= max)
    {
      Value = num;
    }
    else
    {
      cout << RED << "Min-Max Error" << RESET << ", " << GREEN << "Detected Unacceptable Value: " << num << RESET << endl;
      Value = 0;
    }
  }

  // Min & Max
  void setMin(int min)
  {
    this->min = min;
  }

  void setMax(int max)
  {
    this->max = max;
  }

  void setMinMax(int min, int max)
  {
    this->min = min;
    this->max = max;
  }

  // 1: toString
  string toString()
  {
    return to_string(Value);
  }

  // 2: toHexString
  // Not Available

  // 3: toOctalString
  // Not Available

  // 4: toBinaryString
  // Not Available

  // 5: valueOf & setValue
  int valueOf()
  {
    return Value;
  }

  int getValue()
  {
    return Value;
  }

  void printValue()
  {
    cout << Value << endl;
  }

  void setValue(int num)
  {
    checkMinMax(num);
  }

  // 6: floatValue
  float floatValue()
  {
    return (float)Value;
  }

  // 7: doubleValue
  double doubleValue()
  {
    return (double)Value;
  }

  // 8: longValue
  long longValue()
  {
    return (long)Value;
  }

  // 9: intValue
  int intValue()
  {
    return Value;
  }

  // 10: shortValue
  short shortValue()
  {
    return (short)Value;
  }

  // 11: byteValue
  char byteValue()
  {
    return (char)Value;
  }

  // 12: isEven
  bool isEven()
  {
    if (Value % 2 == 0)
      return true;
    else
      return false;
  }

  // 13: isOdd
  bool isOdd()
  {
    if (Value % 2 == 0)
      return false;
    else
      return true;
  }

  // 14: isPrime
  bool isPrime()
  {
    if (Value == 1)
      return false;
    else if (Value == 2)
      return true;
    else
    {
      for (int i = 2; i < Value; i++)
      {
        if (Value % i == 0)
          return false;
      }
      return true;
    }
  }

  // 15: isPalindrome
  bool isPalindrome()
  {
    string str = to_string(Value);
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
      if (str[i] != str[j])
        return false;
      i++;
      j--;
    }
    return true;
  }

  // 16: reverse
  int reverse()
  {
    string str = to_string(Value);
    string str2 = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
      str2 += str[i];
    }
    return stoi(str2);
  }

  // 17: equals
  bool equals(int value)
  {
    if (value == Value)
    {
      return true;
    }
    return false;
  }
  bool equals(string value)
  {
    int v = stoi(value);
    if (v == Value)
    {
      return true;
    }
    return false;
  }
};