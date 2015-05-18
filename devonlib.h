//Author:       Devon Steinkoenig
//Title:        Devon's Library
//File Name:    devonlib.h
//Date Updated: 5/17/15
/*Description:  A library of super useful stuff*/

#ifndef DEVONLIB_H
#define DEVONLIB_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const double PI = 3.14159265358979323846264338327950288419716;

//////////////////////////////////////////////////////////////////////////////
//Description: Calculates 'base' to the power of 'power'
//Pre:         -1<power
//Post:        Returns 'base' to 'power'
//////////////////////////////////////////////////////////////////////////////
float myPower( const float base, const int power );

//////////////////////////////////////////////////////////////////////////////
//Description: Displays a goodbye message
//Pre:         None
//Post:        Displays a goodbye message
//////////////////////////////////////////////////////////////////////////////
void goodbye();

//////////////////////////////////////////////////////////////////////////////
//Description: Generates a pseudo-random number
//Pre:         min<=max, rand() should be seeded with time before calling
//Post:        Returns a number between min and max, inclusive
//////////////////////////////////////////////////////////////////////////////
long myRand( const long min, const long max );

//////////////////////////////////////////////////////////////////////////////
//Description: Finds length of data in c-string, excluding NULL char
//Pre:         cString[] must be end in NULL char
//Post:        Returns length, excluding NULL char
//////////////////////////////////////////////////////////////////////////////
long cStringL( char cString[] );

//////////////////////////////////////////////////////////////////////////////
//Description: Swaps two data of type T
//Pre:         Assignment operator must be defined for type T
//Post:        Swaps the values of two data of type T
//////////////////////////////////////////////////////////////////////////////
template < typename T >
void mySwap( T & t1, T & t2 );

//////////////////////////////////////////////////////////////////////////////
//Description: Sorts an array of type T in ASCENDING order
//Pre:         0<dataSize, operator > must be defined for type T
//Post:        Sorts an array of type T in ASCENDING order
//////////////////////////////////////////////////////////////////////////////
template < typename T >
void myBubbleSort( T & t1, const int dataSize );

template < typename T >
void mySwap( T & t1, T & t2 )
{
  T temp = 0;
  
  temp = t1;
  t1 = t2;
  t2 = temp;
  
  return;
}  //mySwap()

template < typename T >
void myBubbleSort( T t1[], const int dataSize )
{
  long unswapped = 0;
  do
  {
    unswapped = 0;
    for ( int i = 0; i < dataSize-1; i++ )
    {
      if ( t1[i] > t1[i+1] )
      {
        mySwap( t1[i], t1[i+1] );
      } //if
      else
      {
        ++unswapped;
      }  //else
    }  //for
  } while ( unswapped < dataSize-1 );  //continue until no data are swapped
  
  return;
}  //myBubbleSort()

#endif