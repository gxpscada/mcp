// Device ModBus protocol MAP

// Discrete Inputs (RO)
#define mbdi_flagOverLoad 			0x00
#define mbdi_flagOverHeat 			0x01
#define mbdi_flagHeating  			0x02
#define mbdi_flagCooling  			0x03
#define mbdi_flagRunning  			0x04
#define mbdi_flagError	  			0x05
#define mbdi_flagPIDOverRegulated	0x05
#define mbdi_flagPIDUnderRegulated	0x06

// Input Registers (RO)
#define mbir_runPhase				0x00
#define mbir_RunTimeLo				0x01
#define mbir_RunTimeHi				0x02
#define mbir_tssT0					0x09 //Temp Sensor State: T0 (см. лист Статус Датчика Т)
#define mbir_tssT1					0x0A
#define mbir_tssT2					0x0B
#define mbir_tssT3					0x0C
#define mbir_tssT4					0x0D
#define mbir_tssT5					0x0E
#define mbir_tssT6					0x0F
#define mbir_tssT7					0x10

#define mbir_TECVoltVal				0x11 // Напряжение на эл-те Пельтье, mV
#define mbir_TECCurrVal				0x12 // Ток через эл-т Пельтье, mA
#define mbir_ResVoltVal				0x13 // Напряжение на терморезисторе, mV
#define mbir_ResCurrVal				0x14 // Ток через терморезистор, mA

#define mbir_T0Val					0x15 // Значение T0x10, deg C
#define mbir_T1Val					0x16 // Значение T1x10, deg C
#define mbir_T2Val					0x17 // Значение T2x10, deg C
#define mbir_T3Val					0x18 // Значение T3x10, deg C
#define mbir_T4Val					0x19 // Значение T4x10, deg C
#define mbir_T5Val					0x1A // Значение T5x10, deg C
#define mbir_T6Val					0x1B // Значение T6x10, deg C
#define mbir_T7Val					0x1C // Значение T7x10, deg C

#define mbir_ErrorCode				0x1D // см. Лист "Коды Ошибок"

#define mbir_curRTCValLo			0x1E // текущее Время по RTC STM32, Lo
#define mbir_curRTCValHi			0x1F // текущее Время по RTC STM32, Hi

#define mbir_T0ADC					0x20 // Значение T0, ед. ADC
#define mbir_T1ADC					0x21 // Значение T1, ед. ADC
#define mbir_T2ADC					0x22 // Значение T2, ед. ADC
#define mbir_T3ADC					0x23 // Значение T3, ед. ADC
#define mbir_T4ADC					0x24 // Значение T4, ед. ADC
#define mbir_T5ADC					0x25 // Значение T5, ед. ADC
#define mbir_T6ADC					0x26 // Значение T6, ед. ADC
#define mbir_T7ADC					0x27 // Значение T7, ед. ADC

#define mbir_TECVloltADC			0x28 // Напряжение на эл-те Пельтье, ед. АЦП
#define mbir_TECCurrADC				0x29 // Ток через эл-т Пельтье, ед. АЦП (MON_I)

#define mbir_ResVloltADC			0x2A // Напряжение на терморезисторе, ед. АЦП
#define mbirResCurrADC				0x2B // Ток через терморезистор, ед. АЦП

#define mbir_TECPlusVoltADC			0x28 // Напряжение на + Пельтье (MON_VP+)
#define mbir_TECMinusVoltADC		0x29 // Напряжение на - Пельтье (MON_VP-)
#define mbir_TECCurrADC				0x29 // Входное напряжение ??? (VIN_MON)

// Coils
#define mbcoil_cmdRun				0x00 // Запустить контроллер в RunMode
#define mbcoil_cmdFlashCfg			0x01 //Записать конфиг во EEPROM
#define mbcoil_cmdCTWrite			0x02 // Записать калибровочную таблицу
#define mbcoil_cmdCTRead			0x03 // Считать калибровочную таблицу
#define mbcoil_cmdDropError			0x04 // Сброс ошибки STM32
#define mbcoil_setTECHeatMode		0x05 // Задать нагрев/охлаждение TEC
#define mbcoil_cmdWriteEEPROM		0x06 // Записать значение в EEPROM
#define mbcoil_cmdReadEEPROM		0x07 // Считать значение из EEPROM
#define mbcoil_cmdReBoot			0x08 // Перезагрузить STM32
#define mbcoil_cmdWriteRTC			0x09 // Записать RTC

// Holding Registers
#define mbhr_setRunMode				0x00 // Режим работы см. лист "Режимы работы"
#define mbhr_setTECTempVal			0x01 // Уставка температуры Пельтье, Т*10
#define mbhr_setTECTempADC			0x02 // Уставка температуры Пельтье, ADC
#define mbhr_setStillTempDeltaVal	0x03 // Когда считать, что Т стабильна, deltaT, град C*100
#define mbhr_setStillTempDeltaADC	0x04 // Когда считать, что Т стабильна, deltaADC, ед ADC
#define mbhr_setHeatingVelosity		0x05 // Скорость нагрева, град Цельс*10/сек
#define mbhr_setCoolingVelosity		0x06 // Скорость охлаждения, град Цельс*10/сек
#define mbhr_setTemperPollFreq		0x07 // Частота опроса Температур, Гц*10
#define mbhr_setTemperAveCnt		0x08 // Ширина фильтра усредниний для Температур, отсчетов
#define mbhr_setPWMDuty				0x09 // Выставить ШИМ, %*10
#define mbhr_setPWMFreq				0x0A // Частота ШИМ, кГц
#define mbhr_setCTMPeriod			0x0B // Период измерения Т Core, сек
#define mbhr_setMCMPeriod			0x0C // Период измерения Микроциркуляции, сек

#define mbhr_setPIDControlFreq		0x0E // Частота управления ПИД регулятором, Гц
#define mbhr_setColdHeatPIDHist		0x0F // Дельта для переключения ПИД с нагрева на охлаждение
#define mbhr_setHeatPIDPNom			0x10 // Пропорциональный коэф ПИД Kp = (setHeatPIDPNom/setHeatPIDPDenom) Числитель.
#define mbhr_setHeatPIDPDenom		0x11 // Пропорциональный коэф ПИД Kp = (setHeatPIDPNom/setHeatPIDPDenom) Знаменатель.
#define mbhr_setHeatPIDINom			0x12 // Интегральный коэф ПИД Ki = (setHeatPIDINom/setHeatPIDIDenom) Числитель.
#define mbhr_setHeatPIDIDenom		0x13 // Интегральный коэф ПИД Ki = (setHeatPIDINom/setHeatPIDIDenom) Знаменатель.
#define mbhr_setHeatPIDITime		0x14 // Время Интегрирования ПИД (в тактах PIDControlFreq)
#define mbhr_setHeatPIDDNom			0x15 // Дифференциальный  коэф ПИД Kd = (setHeatPIDDNom/setHeatPIDDDenom) Числитель.
#define mbhr_setHeatPIDDDenom		0x16 // Дифференциальный  коэф ПИД Kd = (setHeatPIDDNom/setHeatPIDDDenom) Знаменатель.
#define mbhr_setHeatPIDDTime		0x17 // Время дифференцирования  ПИД (в тактах PIDControlFreq)

#define mbhr_setTECVloltK			0x20 // TECVoltage = (tedVoltAdc*tecVoltK+tecVoltB)/tecVoltDev
#define mbhr_setTECVloltB			0x21 // TECVoltage = (tedVoltAdc*tecVoltK+tecVoltB)/tecVoltDev
#define mbhr_setTECVloltDev			0x22 // TECVoltage = (tedVoltAdc*tecVoltK+tecVoltB)/tecVoltDev
#define mbhr_setTECCurrentK			0x23 // TECCurrent = (tecCurrentAdc*tecCurrentK+tecCurrentB)/tecCurrentDev
#define mbhr_setTECCurrentB			0x24 // TECCurrent = (tecCurrentAdc*tecCurrentK+tecCurrentB)/tecCurrentDev
#define mbhr_setTECCurrentDev		0x25 // TECCurrent = (tecCurrentAdc*tecCurrentK+tecCurrentB)/tecCurrentDev

#define mbhr_setRTCLo				0x2B // Установка RTC в STM32. Lo
#define mbhr_setRTCHi				0x2C // Установка RTC в STM32. Hi
#define mbhr_EEPROMAddrLo			0x2D // Адрес EEPROM для записи/чтения (lo)
#define mbhr_EEPROMAddrHi			0x2E // Адрес EEPROM для записи/чтения (hi)
#define mbhr_EEPROMData				0x2F // Данные EEPROM для записи/чтения





