#include <DE_PinModes.h>  //подключаем библиотеку

PinModes PM;  //создаём объект

void setup() {
  PM.row(0, 19, OUT);  //назначаем выходами пины от 0 до 19
}
void loop() {
  PM.dwRow(0, 19, HIGH);  //даём на пины от 0 до 19 уровень HIGH
}
