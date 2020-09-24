#pragma once
#include <cstdint>
#include <string>

#define DIR_UP    0
#define DIR_RIGHT 1
#define DIR_DOWN  2
#define DIR_LEFT  3

class std15 {

public:
  std15(float screenW, float screenH, int buffW, int buffH);
  virtual ~std15();
  void locate (int x, int y);
  void putc(char c);
  void putstr(std::string s);
  void putnum(int n);
  char scr(int x, int y);
  void cls ();
  void scroll(int dir);
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
