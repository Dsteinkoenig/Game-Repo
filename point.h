//Author:       Devon Steinkoenig
//Title:        point Class
//File Name:    point.h
//Date Updated: 5/18/15
/*Description:  point class definition*/

#ifndef POINT_H
#define POINT_H

class point
{
  private:
    point * northPoint;  //The point to the north of this point
    point * eastPoint;
    point * southPoint;
    point * westPoint;
    long xCoord;  //Each integer represents 50cm
    long yCoord;  //Each int is 50cm
    unsigned short zCoord;  //Each int is 25cm, this is height
  public:
    point():xCoord(0), yCoord(0), zCoord(8001) {};  //Default Constructor
    point( const long x, const long y, const long z = 8001, const point & p );
    long getX() { return xCoord; }
    long getY() { return yCoord; }
    unsigned short getZ() { return zCoord; }
    point * getPoint( const short direction );  //Returns the point in the specified direction
    short getSlope( const short direction );  //Gets the height diff between calling object 
                                              //  and the next point in the specified direction
    
}  //class point

#endif