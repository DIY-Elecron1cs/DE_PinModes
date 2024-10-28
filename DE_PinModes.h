#ifndef DE_PinModes_h
#define DE_PinModes_h
#include <Arduino.h>
#define OUT 1
#define IN 0

class PinModes {
public:
  uint8_t pm2(uint8_t pin0, uint8_t pin1, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    pinMode(_pin0, _state);
    pinMode(_pin1, _state);
  }
  uint8_t pm3(uint8_t pin0, uint8_t pin1, uint8_t pin2, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    pinMode(_pin0, _state);
    pinMode(_pin1, _state);
    pinMode(_pin2, _state);
  }
  uint8_t pm4(uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    pinMode(_pin0, _state);
    pinMode(_pin1, _state);
    pinMode(_pin2, _state);
    pinMode(_pin3, _state);
  }
  uint8_t pm5(uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    _pin4 = pin4;
    pinMode(_pin0, _state);
    pinMode(_pin1, _state);
    pinMode(_pin2, _state);
    pinMode(_pin3, _state);
    pinMode(_pin4, _state);
  }
  uint8_t row(uint8_t pinFirst, uint8_t pinLast, bool state) {
    _state = state;
    _pinFirst = pinFirst;
    _pinLast = pinLast;
    for (int i = _pinFirst; i <= _pinLast; i++) {
      pinMode(i, _state);
    }
  }
    uint8_t dw2(uint8_t pin0, uint8_t pin1, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    digitalWrite(_pin0, _state);
    digitalWrite(_pin1, _state);
  }
  uint8_t dw3(uint8_t pin0, uint8_t pin1, uint8_t pin2, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    digitalWrite(_pin0, _state);
    digitalWrite(_pin1, _state);
    digitalWrite(_pin2, _state);
  }
  uint8_t dw4(uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    digitalWrite(_pin0, _state);
    digitalWrite(_pin1, _state);
    digitalWrite(_pin2, _state);
    digitalWrite(_pin3, _state);
  }
  uint8_t dw5(uint8_t pin0, uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, bool state) {
    _state = state;
    _pin0 = pin0;
    _pin1 = pin1;
    _pin2 = pin2;
    _pin3 = pin3;
    _pin4 = pin4;
    digitalWrite(_pin0, _state);
    digitalWrite(_pin1, _state);
    digitalWrite(_pin2, _state);
    digitalWrite(_pin3, _state);
    digitalWrite(_pin4, _state);
  }
  uint8_t dwRow(uint8_t pinFirst, uint8_t pinLast, bool state) {
    _state = state;
    _pinFirst = pinFirst;
    _pinLast = pinLast;
    for (int i = _pinFirst; i <= _pinLast; i++) {
      digitalWrite(i, _state);
    }
  }
private:
  uint8_t _pin0;
  uint8_t _pin1;
  uint8_t _pin2;
  uint8_t _pin3;
  uint8_t _pin4;
  uint8_t _pinFirst;
  uint8_t _pinLast;
  bool _state;
};
#endif
