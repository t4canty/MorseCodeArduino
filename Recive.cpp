void reciveLetter(int timer){
  const int LongBlink = 600;
  const int ShortBlink = 300;
  const int EndBlink = 900;
  enum blinkType{
    LONG;
    SHORT;
    NOTHING;
  };

  struct _blink{
    blinkType b1;
    blinkType b2;
    blinkType b3;
    blinkType b4;
  };
  
  _blink a = { SHORT, LONG, NOTHING, NOTHING, };
  _blink b = { LONG, SHORT, SHORT, SHORT };
  _blink c = { LONG, SHORT, LONG, SHORT};
  _blink d = { LONG, SHORT, SHORT, NOTHING};
  _blink e = { SHORT, NOTHING, NOTHING, NOTHING};
  _blink d = { LONG, SHORT, SHORT, NOTHING };
  _blink e = { SHORT, NOTHING, NOTHIN
  
