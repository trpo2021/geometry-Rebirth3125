#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "calculate.h"
#include <list>

const double pi=3.141592653589793;

double Perimetr(char figureName, list<double> number)
{
  double P=0;
  if (figureName =="circle")
  {
    P=2*pi*number[2];
  }
  else
  {
    for(int i=0; i<(int)number.size()-2; i+=2)
    P+=sqrt(pow(number[i+1]-number[i],2)+pow(number[i+2]-number[i+3],2));
  }
}

return P;


double Square(char figureName, list<double> number)
{
  double S=0;
  if (figureName =="circle")
  {
    S=pi*pow(number[2],2)
  }
  else
  {
    for (int i=0; i<(int)number.size()-2;i+=2)
    {
      S+=number[i]*number[i+2];
      }
    for (int i=0; i<(int)number.size()-2;i+=2)
    {
      S+=number[i]*number[i+3];
    }
    S=abs(S)/2;
    }
    return S;
  }
