#pragma once

class std15 {

public:
  std15(int screen_sx, int screen_sy, int cb_sx, int cb_sy);
  virtual ~std15();
  void locate (int x, int y);
  void putc(char c);
  char scr(int x, int y);
  void cls ();
  void scroll();
  void ofDraw();
  
private:
  void putc(int x, int y, char c);
  void mapchar(int cx, int cy, char c);
  
private:
  int screen_sx;
  int screen_sy;
  int cb_sx;
  int cb_sy;
  int cb_unit;
  char * charBuff;
  int cursor_x;
  int cursor_y;

};
