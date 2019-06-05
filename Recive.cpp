void reciveLetter(int timer){
  // LongBlink 550 650 ms;
  // ShortBlink 250 300 ms;
  // EndBlink = 50 150 ms;
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
  _blink e = { SHORT, NOTHING, NOTHING };
  _blink f = { SHORT, SHORT, LONG, SHORT};
  _blink g = { LONG, LONG, SHORT, NOTHING};
  _blink h = { SHORT, SHORT, SHORT, SHORT};
  _blink i = { SHORT, SHORT, NOTHING, NOTHING);
  _blink j = { SHORT, LONG, LONG, LONG };
  _blink k = { LONG, SHORT, LONG, NOTHING };
  _blink l = { SHORT, LONG, SHORT, SHORT };
  _blink m = { LONG, LONG, NOTHING, NOTHING };
  _blink n = { LONG, SHORT, NOTHING, NOTHING };
  _blink o = { LONG, LONG, LONG, NOTHING };
  _blink p = { SHORT, LONG, LONG, SHORT };
  _blink q = { LONG, LONG, SHORT, LONG};
  _blink r = { SHORT, LONG, SHORT, NOTHING};
  _blink s = { SHORT, SHORT, SHORT, NOTHING };
  _blink t = { LONG, NOTHING, NOTHING, NOTHING };
  _blink u = { SHORT, SHORT, LONG, NOTHING };
  _blink v = { SHORT, SHORT, SHORT, LONG };
  _blink w = { SHORT, LONG, LONG, NOTHING };
  _blink x = { LONG, SHORT, SHORT, LONG };
  _blink y = { LONG, SHORT, LONG, LONG};
  _blink z = { LONG, LONG, SHORT, SHORT };
  }
