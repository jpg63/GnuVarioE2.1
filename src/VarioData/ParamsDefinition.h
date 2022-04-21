#ifndef _PARAMS_DEFINITION_H
#define _PARAMS_DEFINITION_H

/***************************
 *        PARAMETERS       *
 ***************************/

#define PARAMS_VERSION "1.7"

#define LK8000_SENTENCE 0
#define LXNAV_SENTENCE 1

/**********************/
/* alti/vario objects */
/**********************/
#define POSITION_MEASURE_STANDARD_DEVIATION 0.1


/***************************
 *        DEFINIIONS       *
 ***************************/


#define PARAM_BEEP_VOLUME "BEEP_VOLUME"

////////////////////////////////////
///////// From params.jso //////////
////////////////////////////////////

/* systeme */
#define PARAM_BT_ENABLE "BT_ENABLE"
#define PARAM_NO_RECORD "NO_RECORD"
#define PARAM_ALARM_SDCARD "ALARM_SDCARD"
#define PARAM_BEEP_GPSFIX "BEEP_GPSFIX"
#define PARAM_BEEP_FLYBEGIN "BEEP_FLYBEGIN"
#define PARAM_BEEP_VARIOBEGIN "BEEP_VARIOBEGIN"
#define PARAM_MUTE_VARIOBEGIN "MUTE_VARIOBEGIN"
#define PARAM_SLEEP_TIMEOUT_MINUTES "SLEEP_TIMEOUT_MINUTES"
#define PARAM_SLEEP_THRESHOLD_CPS "SLEEP_THRESHOLD_CPS"
#define PARAM_MULTIDISPLAY_DURATION "MULTIDISPLAY_DURATION"
#define PARAM_DISPLAY_STAT_DURATION "DISPLAY_STAT_DURATION"
#define PARAM_URL_UPDATE "URL_UPDATE"
#define PARAM_LANGUAGE "LANGUAGE"

/* Général */
#define PARAM_PILOT_NAME "PILOT_NAME"
#define PARAM_GLIDER_SELECT "GLIDER_SELECT"
#define PARAM_GLIDER_NAME1 "GLIDER_NAME1"
#define PARAM_GLIDER_NAME2 "GLIDER_NAME2"
#define PARAM_GLIDER_NAME3 "GLIDER_NAME3"
#define PARAM_GLIDER_NAME4 "GLIDER_NAME4"
#define PARAM_TIME_ZONE "TIME_ZONE"

/* Vario */
#define PARAM_SINKING_THRESHOLD "SINKING_THRESHOLD"
#define PARAM_CLIMBING_THRESHOLD "CLIMBING_THRESHOLD"
#define PARAM_NEAR_CLIMBING_SENSITIVITY "NEAR_CLIMBING_SENSITIVITY"
#define PARAM_ENABLE_NEAR_CLIMBING_ALARM "ENABLE_NEAR_CLIMBING_ALARM"
#define PARAM_ENABLE_NEAR_CLIMBING_BEEP "ENABLE_NEAR_CLIMBING_BEEP"
#define PARAM_DISPLAY_INTEGRATED_CLIMB_RATE "DISPLAY_INTEGRATED_CLIMB_RATE"
#define PARAM_RATIO_CLIMB_RATE "RATIO_CLIMB_RATE"
#define PARAM_CLIMB_PERIOD_COUNT "CLIMB_PERIOD_COUNT"
#define PARAM_SETTINGS_GLIDE_RATIO_PERIOD_COUNT "SETTINGS_GLIDE_RATIO_PERIOD_COUNT"
#define PARAM_RATIO_MAX_VALUE "RATIO_MAX_VALUE"
#define PARAM_RATIO_MIN_SPEED "RATIO_MIN_SPEED"
#define PARAM_VARIOMETER_ENABLE_AGL "VARIOMETER_ENABLE_AGL"
#define PARAM_SENT_LXNAV_SENTENCE "SENT_LXNAV_SENTENCE"
#define PARAM_ACCELERATION_MEASURE_STANDARD_DEVIATION "ACCELERATION_MEASURE_STANDARD_DEVIATION"
#define PARAM_VARIOMETER_INTEGRATED_CLIMB_RATE "VARIOMETER_INTEGRATED_CLIMB_RATE"
#define PARAM_SETTINGS_VARIO_PERIOD_COUNT "SETTINGS_VARIO_PERIOD_COUNT"
#define PARAM_BLUETOOTH_SEND_CALIBRATED_ALTITUDE "BLUETOOTH_SEND_CALIBRATED_ALTITUDE"

/* Flight start */
#define PARAM_FLIGHT_START_MIN_TIMESTAMP "FLIGHT_START_MIN_TIMESTAMP"
#define PARAM_FLIGHT_START_VARIO_LOW_THRESHOLD "FLIGHT_START_VARIO_LOW_THRESHOLD"
#define PARAM_FLIGHT_START_VARIO_HIGH_THRESHOLD "FLIGHT_START_VARIO_HIGH_THRESHOLD"
#define PARAM_FLIGHT_START_MIN_SPEED "FLIGHT_START_MIN_SPEED"
#define PARAM_RECORD_WHEN_FLIGHT_START "RECORD_WHEN_FLIGHT_START"

////////////////////////////////////
///////// From WIFI.CFG   //////////
////////////////////////////////////

/* wifi */
#define PARAM_SSID_1 "SSID_1"
#define PARAM_PASSWORD_1 "PASSWORD_1"
#define PARAM_SSID_2 "SSID_2"
#define PARAM_PASSWORD_2 "PASSWORD_2"
#define PARAM_SSID_3 "SSID_3"
#define PARAM_PASSWORD_3 "PASSWORD_3"
#define PARAM_SSID_4 "SSID_4"
#define PARAM_PASSWORD_4 "PASSWORD_4"

////////////////////////////////////
//////// From variocal.cfg  ////////
////////////////////////////////////

/* variocal */
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_00 "VERTACCEL_GYRO_CAL_BIAS_00"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_01 "VERTACCEL_GYRO_CAL_BIAS_01"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_02 "VERTACCEL_GYRO_CAL_BIAS_02"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_03 "VERTACCEL_GYRO_CAL_BIAS_03"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_04 "VERTACCEL_GYRO_CAL_BIAS_04"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_05 "VERTACCEL_GYRO_CAL_BIAS_05"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_06 "VERTACCEL_GYRO_CAL_BIAS_06"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_07 "VERTACCEL_GYRO_CAL_BIAS_07"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_08 "VERTACCEL_GYRO_CAL_BIAS_08"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_09 "VERTACCEL_GYRO_CAL_BIAS_09"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_10 "VERTACCEL_GYRO_CAL_BIAS_10"
#define PARAM_VERTACCEL_GYRO_CAL_BIAS_11 "VERTACCEL_GYRO_CAL_BIAS_11"
#define PARAM_VERTACCEL_ACCEL_CAL_BIAS_00 "VERTACCEL_ACCEL_CAL_BIAS_00"
#define PARAM_VERTACCEL_ACCEL_CAL_BIAS_01 "VERTACCEL_ACCEL_CAL_BIAS_01"
#define PARAM_VERTACCEL_ACCEL_CAL_BIAS_02 "VERTACCEL_ACCEL_CAL_BIAS_02"
#define PARAM_VERTACCEL_ACCEL_CAL_SCALE "VERTACCEL_ACCEL_CAL_SCALE"
#define PARAM_VERTACCEL_MAG_CAL_BIAS_00 "VERTACCEL_MAG_CAL_BIAS_00"
#define PARAM_VERTACCEL_MAG_CAL_BIAS_01 "VERTACCEL_MAG_CAL_BIAS_01"
#define PARAM_VERTACCEL_MAG_CAL_BIAS_02 "VERTACCEL_MAG_CAL_BIAS_02"
#define PARAM_VERTACCEL_MAG_CAL_PROJ_SCALE "VERTACCEL_MAG_CAL_PROJ_SCALE"
#define PARAM_VERTACCEL_ACCEL_CAL_BIAS_MULTIPLIER "VERTACCEL_ACCEL_CAL_BIAS_MULTIPLIER"
#define PARAM_VERTACCEL_MAG_CAL_BIAS_MULTIPLIER "VERTACCEL_MAG_CAL_BIAS_MULTIPLIER"

/***************************
 *     DEFAULT VALUES      *
 ***************************/
#define DEFAULT_BEEP_VOLUME 3

////////////////////////////////////
///////// From params.jso //////////
////////////////////////////////////

/* systeme */
#define DEFAULT_BT_ENABLE false
#define DEFAULT_NO_RECORD false
#define DEFAULT_ALARM_SDCARD true
#define DEFAULT_BEEP_GPSFIX true
#define DEFAULT_BEEP_FLYBEGIN true
#define DEFAULT_BEEP_VARIOBEGIN true
#define DEFAULT_MUTE_VARIOBEGIN false
#define DEFAULT_SLEEP_TIMEOUT_MINUTES 20
#define DEFAULT_SLEEP_THRESHOLD_CPS 0.5
#define DEFAULT_MULTIDISPLAY_DURATION 2000
#define DEFAULT_DISPLAY_STAT_DURATION 6
#define DEFAULT_URL_UPDATE "http://gnuvario-e.yj.fr/webupdate/checkversion"
#define DEFAULT_LANGUAGE 0

/* Général */
#define DEFAULT_PILOT_NAME "THE Pilot"
#define DEFAULT_GLIDER_SELECT 0
#define DEFAULT_GLIDER_NAME1 "MyWing"
#define DEFAULT_GLIDER_NAME2 ""
#define DEFAULT_GLIDER_NAME3 ""
#define DEFAULT_GLIDER_NAME4 ""
#define DEFAULT_TIME_ZONE 2

/* Vario */
#define DEFAULT_SINKING_THRESHOLD -2.0
#define DEFAULT_CLIMBING_THRESHOLD 0.2
#define DEFAULT_NEAR_CLIMBING_SENSITIVITY 0.5
#define DEFAULT_ENABLE_NEAR_CLIMBING_ALARM false
#define DEFAULT_ENABLE_NEAR_CLIMBING_BEEP false
#define DEFAULT_DISPLAY_INTEGRATED_CLIMB_RATE false
#define DEFAULT_RATIO_CLIMB_RATE 1
#define DEFAULT_CLIMB_PERIOD_COUNT 10
#define DEFAULT_SETTINGS_GLIDE_RATIO_PERIOD_COUNT 20
#define DEFAULT_RATIO_MAX_VALUE 30.0
#define DEFAULT_RATIO_MIN_SPEED 10.0
#define DEFAULT_VARIOMETER_ENABLE_AGL false
#define DEFAULT_SENT_LXNAV_SENTENCE false
#define DEFAULT_ACCELERATION_MEASURE_STANDARD_DEVIATION 0.35
#define DEFAULT_VARIOMETER_INTEGRATED_CLIMB_RATE false
#define DEFAULT_SETTINGS_VARIO_PERIOD_COUNT 5
#define DEFAULT_BLUETOOTH_SEND_CALIBRATED_ALTITUDE true

/* Flight start */
#define DEFAULT_FLIGHT_START_MIN_TIMESTAMP 15000
#define DEFAULT_FLIGHT_START_VARIO_LOW_THRESHOLD -0.5
#define DEFAULT_FLIGHT_START_VARIO_HIGH_THRESHOLD 0.5
#define DEFAULT_FLIGHT_START_MIN_SPEED 8.0
#define DEFAULT_RECORD_WHEN_FLIGHT_START true

////////////////////////////////////
///////// From WIFI.CFG   //////////
////////////////////////////////////

/* wifi */
#define DEFAULT_SSID_1 "your_SSID1"
#define DEFAULT_PASSWORD_1 "your_PASSWORD_for SSID1"
#define DEFAULT_SSID_2 "your_SSID2"
#define DEFAULT_PASSWORD_2 "your_PASSWORD_for SSID2"
#define DEFAULT_SSID_3 "your_SSID3"
#define DEFAULT_PASSWORD_3 "your_PASSWORD_for SSID3"
#define DEFAULT_SSID_4 "your_SSID4"
#define DEFAULT_PASSWORD_4 "your_PASSWORD_for SSID4"

////////////////////////////////////
//////// From variocal.cfg  ////////
////////////////////////////////////

/* variocal */
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_00 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_01 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_02 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_03 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_04 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_05 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_06 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_07 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_08 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_09 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_10 0x00
#define DEFAULT_VERTACCEL_GYRO_CAL_BIAS_11 0x00
#define DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_00 0x00
#define DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_01 0x00
#define DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_02 0x00
#define DEFAULT_VERTACCEL_ACCEL_CAL_SCALE 0
#define DEFAULT_VERTACCEL_MAG_CAL_BIAS_00 0
#define DEFAULT_VERTACCEL_MAG_CAL_BIAS_01 0
#define DEFAULT_VERTACCEL_MAG_CAL_BIAS_02 0
#define DEFAULT_VERTACCEL_MAG_CAL_PROJ_SCALE -16689
#define DEFAULT_VERTACCEL_ACCEL_CAL_BIAS_MULTIPLIER 7
#define DEFAULT_VERTACCEL_MAG_CAL_BIAS_MULTIPLIER 5

#define LK8000_SENTENCE 0
#define LXNAV_SENTENCE 1

/**********************/
/* alti/vario objects */
/**********************/
#define POSITION_MEASURE_STANDARD_DEVIATION 0.1

#endif //_PARAMS_DEFINITION_H