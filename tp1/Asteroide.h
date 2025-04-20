#pragma once
#include <iostream>
#include <ncurses.h>
#include "Nave.h"

using namespace std;

class Asteroide
{
public:
  Asteroide(int x, int y);
  void update();
  void draw();

  void colision(Nave &rNave);

  // (5)+++
  //-----------------------------------------------------------------------
  // Agregamos los métodos accesor para saber la posición del asteroide.
  int getX();
  int getY();
  //-----------------------------------------------------------------------
  // +++(5) -Ir a Asteroide.cpp

private:
  float m_x, m_y;
};