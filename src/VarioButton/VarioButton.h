#ifndef _VARIOBUTTON_H_
#define _VARIOBUTTON_H_

#include "Button.h"

#include <HardwareConfig.h>
#define DEBOUNCE_MS 30

class VarioManager;

class VarioButton
{
private:
	const TickType_t delayT100 = pdMS_TO_TICKS(100);
	TaskHandle_t _taskVarioButtonHandle = NULL;
	VarioManager *vm;
	static void startTaskImpl(void *);
	void task();
	bool _stateBA = false;
	bool _stateBB = false;
	bool _stateBC = false;

public:
	VarioButton(VarioManager *vm);
	void startTask();
	Button BtnA = Button(PIN_BUTTON_A, true, DEBOUNCE_MS);
	Button BtnB = Button(PIN_BUTTON_B, true, DEBOUNCE_MS);
	Button BtnC = Button(PIN_BUTTON_C, true, DEBOUNCE_MS);

	void update();
};

#endif
