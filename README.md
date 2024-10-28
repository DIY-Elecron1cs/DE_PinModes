# DE_PinModes
простая библиотека для управления пинами Arduino

##подключение библиотеки
```cpp
#include <DE_PinModes.h>
```
###объекты
```cpp
PinModes PM;
```
##методы
```cpp
/* PinMode */
PM.pm2(пин1, пин2, состояние);
PM.pm3(пин1, пин2, пин3, состояние);
PM.pm4(пин1, пин2, пин3, пин4, состояние);
PM.pm5(пин1, пин2, пин3, пин4, пин5, состояние);
PM.row(пин_начальный, пин_конечный, состояние);

/* DigitalWrite */
PM.dw2(пин1, пин2, состояние);
PM.dw3(пин1, пин2, пин3, состояние);
PM.dw4(пин1, пин2, пин3, пин4, состояние);
PM.dw5(пин1, пин2, пин3, пин4, пин5, состояние);
PM.dwRow(пин_начальный, пин_конечный, состояние);
```
##состояния
состояния PinMod'ов:
```cpp
IN (INPUT, 0)
OUT (OUTPUT, 1)
```
состояния DigitalWrit'ов:
```cpp
HIGH (1)
LOW (0)
```
