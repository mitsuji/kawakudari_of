#pragma once
#include <cstdint>

class std15 {

public:
  std15(float screenW, float screenH, int buffW, int buffH);
  virtual ~std15();
  void locate (int x, int y);
  void putc(char c);
  char scr(int x, int y);
  void cls ();
  void scroll();
  void drawScreen();
  
private:
  void setChar(int x, int y, char c);
  void drawChar(int x, int y, char c);
  
private:
  float screenW;
  float screenH;
  int buffW;
  int buffH;
  float dotW;
  float dotH;
  char * buff;
  int cursorX;
  int cursorY;

};
