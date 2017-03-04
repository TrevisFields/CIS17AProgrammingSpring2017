#pragma once
class Cylinder
{
private:
  double radius;
  double PI;
  double distance;
  
public:
  Cylinder();
  void setRadius(double);
  void setPI(double);
  void setDistance(double);
  
  double getRadius() const
  {
	 return radius;
  }
  
  double getPI() const
  {
	 return PI;
  }
  
  double getDistance() const
  {
	 return distance;
  }
  
  double getArea() const
  {
	 return (2 *PI * radius * distance ) + (2 * PI * radius * radius);
  }
};
