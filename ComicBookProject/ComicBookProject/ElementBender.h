//  ElementBender.h
//  ComicBookProject
//
//  Created by Trevis Jontaé Fields on 3/20/17.
//  Copyright © 2017 Trevis Jontaé Fields. All rights reserved.

#pragma once
#include <string>
#include <stack>

class ElementBender
{
private:
  //std::stack<Bender *> _benderType;
public:
  ElementBender(std::string elementType);
  ~ElementBender();
  
  std::string getNationElement();
};






