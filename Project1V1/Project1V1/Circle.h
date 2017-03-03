class Circle
{
private:
  double radius;
  double PI;
  
public:
  Circle();
  void setRadius(double);
  void setPI(double);
  
  double getRadius() const
  {
	 return radius;
  }
  
  double getPI() const
  {
	 return PI;
  }
  
  double getArea() const
  {
	 return PI * radius * radius;
  }
};
