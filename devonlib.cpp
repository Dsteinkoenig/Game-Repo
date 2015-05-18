//Author:       Devon Steinkoenig
//Title:        Devon's Library
//File Name:    devonlib.cpp
//Date Updated: 5/17/15
/*Description:  A library of super useful stuff*/

#include "devonlib.h"
using namespace std;

/*Placeholder main() for testing purposes
int main()
{
  char arr[64];
  short num = 0;
  short numStars = 0;
  
  srand(time(NULL));
  
  do
  {
    for ( short i = 0; i < 64; i++ )
    {
      if ( (arr[i] != '*') && (numStars < 40) )
      {
        num = rand() % 64;
        if ( num < 40 )
        {
          arr[i] = '*';
          ++numStars;
        }  //if
        else
          arr[i] = ' ';
      }  //if
    }  //for i
  } while ( numStars < 40 );
  
  for ( short i = 0; i < 64; i++ )
  {
    cout<<arr[i];
    if ( ((i + 1) % 8) == 0 )
      cout<<endl;
  }  //for i
  
  return 0;
}
*/

float myPower( const float base, const int power )
{
  float numInProgress = 1;
  
  for ( int i = 1; i <= power; i++)
  {
    numInProgress *= base;
  }  //for
  
  return numInProgress;
}  //myPower()

long myRand( const long min, const long max )
{
  long randNum = 0;
  
  randNum = ( rand() % ( ( max + 1 ) - min ) ) + min;
  
  return randNum;
}  //myRand()

long cStringL( char cString[] )
{
  long count = 0;
  
  do
  {
    if ( cString[count] != '\0' )
      ++count;
  } while ( (cString[count] != '\0') );
  
  return count;
}  //cStringL()