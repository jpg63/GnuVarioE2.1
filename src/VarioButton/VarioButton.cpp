
#include "VarioButton/VarioButton.h"
#include "VarioManager.h"
#include "VarioDebug/VarioDebug.h"

#define DELAY_LONG 1500

VarioButton::VarioButton(VarioManager *lvm)
{
	vm = lvm;

	// Setup the button with an internal pull-up
	pinMode(PIN_BUTTON_A, INPUT_PULLUP);
	pinMode(PIN_BUTTON_B, INPUT_PULLUP);
	pinMode(PIN_BUTTON_C, INPUT_PULLUP);
}

void VarioButton::startTask()
{
	// task creation
	VARIO_PROG_DEBUG_PRINTLN("TaskVarioButton started");
	xTaskCreate(this->startTaskImpl, "TaskVarioButton", 1000, this, 10, &_taskVarioButtonHandle);
}

void VarioButton::startTaskImpl(void *parm)
{
	// wrapper for task
	static_cast<VarioButton *>(parm)->task();
}

void VarioButton::task()
{

	while (1)
	{
		update();

		// give time to other tasks
		vTaskDelay(delayT100);
//		Serial.println("btn");
		VARIO_BTN_DEBUG_PRINTLN("btn")
	}
}

void VarioButton::update()
{
	//Button update
	BtnA.read();
	BtnB.read();
	BtnC.read();

	// BTN A
	if (BtnA.wasPressed())
	{
		_stateBA = true;
	}

	if (BtnA.pressedFor(DELAY_LONG))
	{
		if (_stateBA == true)
		{
			vm->handleButton(BTN_LONG_A);
			_stateBA = false;
		}
	}

	if (BtnA.wasReleased())
	{
		if (_stateBA == true)
		{
			vm->handleButton(BTN_SHORT_A);
			_stateBA = false;
		}
	}

	// BTN B
	if (BtnB.wasPressed())
	{
		_stateBB = true;
	}

	if (BtnB.pressedFor(DELAY_LONG))
	{
		if (_stateBB == true)
		{
			vm->handleButton(BTN_LONG_B);
			_stateBB = false;
		}
	}

	if (BtnB.wasReleased())
	{
		if (_stateBB == true)
		{
			vm->handleButton(BTN_SHORT_B);
			_stateBB = false;
		}
	}

	// BTN C
	if (BtnC.wasPressed())
	{
		_stateBC = true;
	}

	if (BtnC.pressedFor(DELAY_LONG))
	{
		if (_stateBC == true)
		{
			vm->handleButton(BTN_LONG_C);
			_stateBC = false;
		}
	}

	if (BtnC.wasReleased())
	{
		if (_stateBC == true)
		{
			vm->handleButton(BTN_SHORT_C);
			_stateBC = false;
		}
	}
}
