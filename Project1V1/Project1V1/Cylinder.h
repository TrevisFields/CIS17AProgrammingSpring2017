class Cylinder
{
private:
  double radius;
  double PI;
  double heigth;
  
public:
  Cylinder();
  void setRadius(double);
  void setPI(double);
  void setHeigth(double);
  
  double getRadius() const
  {
	 return radius;
  }
  
  double getPI() const
  {
	 return PI;
  }
  
  double getdDistance() const
  {
	 return heigth;
  }
  
  double getArea() const
  {
	 return ((2 *PI * radius * heigth ) + (2 * PI * radius * radius));
  }
};
