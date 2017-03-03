class Triangle
{
private:
  double hypo;
  double base;
  
public:
  Triangle();
  void setHypo(double);
  void setBase(double);
  
  double getHypo() const
  {
	 return hypo;
  }
  
  double getBase() const
  {
	 return base;
  }
  
  double getArea() const
  {
	 return (base * hypo) / 2;
  }
};
