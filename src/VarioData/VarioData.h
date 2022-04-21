#ifndef _VARIO_DATA_H_
#define _VARIO_DATA_H_

#include <Arduino.h>
#include "ParamsDefinition.h"
#include "DataDefinition.h"
#include "DataStateDefinition.h"
#include "VarioDataType.h"

class VarioData
{
private:

  VarioDataType Params[73] = {
      {PARAM_BEEP_VOLUME, (uint8_t)DEFAULT_BEEP_VOLUME},
      /* systeme */
      {PARAM_BT_ENABLE, (bool)DEFAULT_BT_ENABLE},
      {PARAM_NO_RECORD, (bool)DEFAULT_NO_RECORD},
      {PARAM_ALARM_SDCARD, (bool)DEFAULT_ALARM_SDCARD},
      {PARAM_BEEP_GPSFIX, (bool)DEFAULT_BEEP_GPSFIX},
      {PARAM_BEEP_FLYBEGIN, (bool)DEFAULT_BEEP_FLYBEGIN},
      {PARAM_BEEP_VARIOBEGIN, (bool)DEFAULT_BEEP_VARIOBEGIN},
      {PARAM_MUTE_VARIOBEGIN, (bool)DEFAULT_MUTE_VARIOBEGIN},
      {PARAM_SLEEP_TIMEOUT_MINUTES, (uint8_t)DEFAULT_SLEEP_TIMEOUT_MINUTES},
      {PARAM_SLEEP_THRESHOLD_CPS, (float)DEFAULT_SLEEP_THRESHOLD_CPS},
      {PARAM_MULTIDISPLAY_DURATION, (int16_t)DEFAULT_MULTIDISPLAY_DURATION},
      {PARAM_DISPLAY_STAT_DURATION, (uint8_t)DEFAULT_DISPLAY_STAT_DURATION},
      {PARAM_URL_UPDATE, (const char *)DEFAULT_URL_UPDATE},
      {PARAM_LANGUAGE, (uint8_t)DEFAULT_LANGUAGE},
      /* Général */
      {PARAM_PILOT_NAME, DEFAULT_PILOT_NAME},
      {PARAM_GLIDER_SELECT, (uint8_t)DEFAULT_GLIDER_SELECT},
      {PARAM_GLIDER_NAME1, DEFAULT_GLIDER_NAME1},
      {PARAM_GLIDER_NAME2, DEFAULT_GLIDER_NAME2},
      {PARAM_GLIDER_NAME3, DEFAULT_GLIDER_NAME3},
      {PARAM_GLIDER_NAME4, DEFAULT_GLIDER_NAME4},
      {PARAM_TIME_ZONE, (int8_t)DEFAULT_TIME_ZONE},
      /* Vario */
      {PARAM_SINKING_THRESHOLD, (float)DEFAULT_SINKING_THRESHOLD},
      {PARAM_CLIMBING_THRESHOLD, (float)DEFAULT_CLIMBING_THRESHOLD},
      {PARAM_NEAR_CLIMBING_SENSITIVITY, (float)DEFAULT_NEAR_CLIMBING_SENSITIVITY},
      {PARAM_ENABLE_NEAR_CLIMBING_ALARM, (bool)DEFAULT_ENABLE_NEAR_CLIMBING_ALARM},
      {PARAM_ENABLE_NEAR_CLIMBING_BEEP, (bool)DEFAULT_ENABLE_NEAR_CLIMBING_BEEP},
      {PARAM_DISPLAY_INTEGRATED_CLIMB_RATE, (bool)DEFAULT_DISPLAY_INTEGRATED_CLIMB_RATE},
      {PARAM_RATIO_CLIMB_RATE, (uint8_t)DEFAULT_RATIO_CLIMB_RATE},
      {PARAM_CLIMB_PERIOD_COUNT, (int8_t)DEFAULT_CLIMB_PERIOD_COUNT},
      {PARAM_SETTINGS_GLIDE_RATIO_PERIOD_COUNT, (int8_t)DEFAULT_SETTINGS_GLIDE_RATIO_PERIOD_COUNT},
      {PARAM_RATIO_MAX_VALUE, (float)DEFAULT_RATIO_MAX_VALUE},
      {PARAM_RATIO_MIN_SPEED, (float)DEFAULT_RATIO_MIN_SPEED},
      {PARAM_VARIOMETER_ENABLE_AGL, (bool)DEFAULT_VARIOMETER_ENABLE_AGL},
      {PARAM_SENT_LXNAV_SENTENCE, (bool)DEFAULT_SENT_LXNAV_SENTENCE},
      {PARAM_ACCELERATION_MEASURE_STANDARD_DEVIATION, (float)DEFAULT_ACCELERATION_MEASURE_STANDARD_DEVIATION},
      {PARAM_VARIOMETER_INTEGRATED_CLIMB_RATE, (bool)DEFAULT_VARIOMETER_INTEGRATED_CLIMB_RATE},
      {PARAM_SETTINGS_VARIO_PERIOD_COUNT, (uint8_t)DEFAULT_SETTINGS_VARIO_PERIOD_COUNT},
      {PARAM_BLUETOOTH_SEND_CALIBRATED_ALTITUDE, (bool)DEFAULT_BLUETOOTH_SEND_CALIBRATED_ALTITUDE},
      /* Flight start */
      {PARAM_FLIGHT_START_MIN_TIMESTAMP, (uint16_t)DEFAULT_FLIGHT_START_MIN_TIMESTAMP},
      {PARAM_FLIGHT_START_VARIO_LOW_THRESHOLD, (float)DEFAULT_FLIGHT_START_VARIO_LOW_THRESHOLD},
      {PARAM_FLIGHT_START_VARIO_HIGH_THRESHOLD, (float)DEFAULT_FLIGHT_START_VARIO_HIGH_THRESHOLD},
      {PARAM_FLIGHT_START_MIN_SPEED, (float)DEFAULT_FLIGHT_START_MIN_SPEED},
      {PARAM_RECORD_WHEN_FLIGHT_START, (bool)DEFAULT_RECORD_WHEN_FLIGHT_START},
      /* wifi */
      {PARAM_SSID_1, (const char *)DEFAULT_SSID_1},
      {PARAM_PASSWORD_1, (const char *)DEFAULT_PASSWORD_1},
      {PARAM_SSID_2, (const char *)DEFAULT_SSID_2},
      {PARAM_PASSWORD_2, (const char *)DEFAULT_PASSWORD_2},
      {PARAM_SSID_3, (const char *)DEFAULT_SSID_3},
      {PARAM_PASSWORD_3, (const char *)DEFAULT_PASSWORD_3},
      {PARAM_SSID_4, (const char *)DEFAULT_SSID_4},
      {PARAM_PASSWORD_4, (const char *)DEFAULT_PASSWORD_4},
      /* variocal */
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_00, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_00},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_01, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_01},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_02, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_02},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_03, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_03},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_04, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_04},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_05, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_05},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_06, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_06},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_07, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_07},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_08, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_08},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_09, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_09},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_10, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_10},
      {PARAM_VERTACCEL_GYRO_CAL_BIAS_11, (uint8_t)DEFAULT_VERTACCEL_GYRO_CAL_BIAS_11},
      {PARAM_VERTACCEL_ACCEL_CAL_BIAS_00, (int16_t)DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_00},
      {PARAM_VERTACCEL_ACCEL_CAL_BIAS_01, (int16_t)DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_01},
      {PARAM_VERTACCEL_ACCEL_CAL_BIAS_02, (int16_t)DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_02},
      {PARAM_VERTACCEL_ACCEL_CAL_SCALE, (int16_t)DEFAULT_VERTACCEL_ACCEL_CAL_SCALE},
      {PARAM_VERTACCEL_MAG_CAL_BIAS_00, (int16_t)DEFAULT_VERTACCEL_MAG_CAL_BIAS_00},
      {PARAM_VERTACCEL_MAG_CAL_BIAS_01, (int16_t)DEFAULT_VERTACCEL_MAG_CAL_BIAS_01},
      {PARAM_VERTACCEL_MAG_CAL_BIAS_02, (int16_t)DEFAULT_VERTACCEL_MAG_CAL_BIAS_02},
      {PARAM_VERTACCEL_MAG_CAL_PROJ_SCALE, (int16_t)DEFAULT_VERTACCEL_MAG_CAL_PROJ_SCALE},
      {PARAM_VERTACCEL_ACCEL_CAL_BIAS_MULTIPLIER, (uint16_t)DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_MULTIPLIER},
      {PARAM_VERTACCEL_MAG_CAL_BIAS_MULTIPLIER, (uint16_t)DEFAULT_VERTACCEL_MAG_CAL_BIAS_MULTIPLIER}
      /* variosound */
      };

  VarioDataType Datas[6] = {
    {DATA_FIRSTALTI, (double)DEFAULT_FIRSTALTI},
    {DATA_VELOCITY, (double)DEFAULT_VELOCITY},                //Kalman Vario
    {DATA_ALTI, (double)DEFAULT_ALTI},                        //Alti Vario
    {DATA_ALTIFILTERED, (double)DEFAULT_ALTIFILTERED},       
    {DATA_CALIBRATEDALTI, (double)DEFAULT_CALIBRATEDALTI},    //Kalman Alti
    {DATA_TEMPERATURE, (double)DEFAULT_TEMPERATURE}

/*
    double 	firstAlti; 
		double 	velocity;				//KalmanVario
		double 	alti;						//Alti baro
		double  altiFiltered = 0;
		double 	calibratedAlti;	//KalmanAlti
		double 	temperature;
		double 	accel;
		double 	climbRate;
		double 	trend;
		int 	 	stateTrend;		
		double 	climbRateBuzzer;
		uint8_t variometerState;
		double 	currentSpeed  = 0;
		double 	gpsAlti = 0;
		double 	currentHeight = 0;
		
		unsigned long	TimeStartFly;
		uint8_t	CompteurStartFly	= 0;
		unsigned long	TimeCapMesure = 0;		
		int 		bearing = 0;
		int 		moyCap = 0;
		int			nbMesureCap = 0;

		int 		compteurGpsFix = 0;
		uint8_t gpsFix = 0;

		double  ratio = 0;

		long 		voltage = 0;
		
		unsigned long lastDisplayTimestamp, lastDisplayTimestamp2;

    uint8_t Version;
		uint8_t Sub_Version;
		uint8_t Beta_Code;
		String  Devname;

*/

  };

  VarioDataType DataState[5] = {
    {STATE_HAVENEWCLIMBRATEDATA, (bool)DEFAULT_HAVENEWCLIMBRATEDATA},
    {STATE_HAVENEWCLIMBRATEDATABUZZER, (bool)DEFAULT_HAVENEWCLIMBRATEDATABUZZER},
    {STATE_COMPTEURSTAERTFLYENABLE, (bool)DEFAULT_COMPTEURSTARTFLYENABLE},
    {STATE_SPEEDAVALABLE, (bool)DEFAULT_SPEEDAVALABLE},
    {STATE_GPSAVALABLE, (bool)DEFAULT_GPSAVALABLE}


/*
		bool   	haveNewClimbRateData = false;
		bool   	haveNewClimbRateDataBuzzer = false;
		bool 		CompteurStartFlyEnable 	= false;
		bool		SpeedAvalable = false;
		bool    GpsAvalable   = false;
		bool		SD_present = false;
    bool    displayLowUpdateState = true;
    bool    displayUpdateState = true;

*/

  };

public :
  VarioData();
  boolean init();
  VarioDataType *getParam(const char *paramName);
  boolean applySettingParam(const char *settingName, const char *settingValue);
  VarioDataType *getData(const char *dataName);
  boolean setData(const char *dataName, const char *dataValue);
};

extern VarioData varioData;
#endif
