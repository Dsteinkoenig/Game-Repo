//Author:       Devon Steinkoenig
//Title:        UNNAMED_GAME Main
//File Name:    main.cpp
//Date Updated: 5/17/15
/*Description:  The main file for UNNAMED_GAME*/

struct point
{
  long xCoord;  //Each integer represents 50cm
  long yCoord;  //Each int is 50cm
  unsigned short zCoord;  //Each int is 25cm, this is height
  point();  //Constructor
}  //struct point

struct line
{
  point pointA;
  point pointB;
  line();  //Constructor
}  //struct line

struct triangle
{
  line lineA;
  line lineB;
  line lineC;
  triangle();  //Constructor
}  //struct triangle

int main()
{
  
  return 0;
}  //main()