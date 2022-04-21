
#ifndef VARIO_DATA_H
#define VARIO_DATA_H

class VarioData
{
public:
    VarioData();
    void 		init(uint8_t version, uint8_t sub_version, uint8_t beta_code, String devname);
		void 		initKalman(double firstAlti);
		bool 		initSettings(bool Test_SD); 
		bool 		initLog(void); 
		bool 		initAGL(void);
		void 		initTime(void);

    void   	update();
		bool   	updateBluetooth();
		void   	updateGps();
		void    updateState();
		bool 		updateSpeed(void);
		void 		updateVoltage(void);
		void 		updateBeeper(void);

    double 	getVelocity();
    double 	getCalibratedAlti();
		double 	getClimbRate();
		double 	getTrend();
		int    	getStateTrend();
		uint8_t getVariometerState();
		int 		getCap();
		double  getSpeed();
		void    setCurrentHeight(double height);
		double  getCurrentHeight();
		void    setGpsAlti(double gpsalti);
		double  getGpsAlti();
		
		bool 	 	haveNewClimbRate();
				
		void 		createSDCardTrackFile(void);
		void 		enableflightStartComponents(void);
		
		int 		compteurGpsFix = 0;
		uint8_t gpsFix = 0;

		double  ratio = 0;

		long 		voltage = 0;
		
		unsigned long lastDisplayTimestamp, lastDisplayTimestamp2;

    boolean displayLowUpdateState = true;
    boolean displayUpdateState = true;

    VarioStat flystat;

    Kalmanvert kalmanvert;

		uint8_t Version;
		uint8_t Sub_Version;
		uint8_t Beta_Code;
		String  Devname;

/*********************/
/*  AGL              */
/*********************/

#ifdef AGL_MANAGER_H
		AglManager aglManager;
#endif

/************************************/
/* glide ratio / average climb rate */
/************************************/

/* two minutes history */
#ifdef HAVE_GPS
		SpeedFlightHistory<500, 120, historyGPSPeriodCount> history;
#else
		FlightHistory<500, 120> history;
#endif

		FlightHistory<50, 40> buzzerHistory;

private:
		unsigned long compteurErrorMPU = 0;
		int compteurBoucle = 0;


// DATA

    double 	firstAlti; 
		double 	velocity;				//KalmanVario
		double 	alti;						//Alti baro
		double  altiFiltered = 0;
		double 	calibratedAlti;	//KalmanAlti
		double 	temperature;
		double 	accel;
		double 	climbRate;
		bool   	haveNewClimbRateData = false;
		double 	trend;
		int 	 	stateTrend;		
		double 	climbRateBuzzer;
		bool   	haveNewClimbRateDataBuzzer = false;
		uint8_t variometerState;
		double 	currentSpeed  = 0;
		double 	gpsAlti = 0;
		double 	currentHeight = 0;
		
		bool 		CompteurStartFlyEnable 	= false;
		unsigned long	TimeStartFly;
		uint8_t	CompteurStartFly	= 0;
		bool		SpeedAvalable = false;
		bool    GpsAvalable   = false;
		unsigned long	TimeCapMesure = 0;		
		int 		bearing = 0;
		int 		moyCap = 0;
		int			nbMesureCap = 0;
		bool		SD_present = false;
		
		float constrainAngle360(float dta);
		
		VarioDataProcessing varioDataProcessing;
};

extern VarioData varioData;

/**********************/
/* SDCARD objects     */
/**********************/
extern int8_t sdcardState;
extern VarioSettings GnuSettings;

#endif //VARIO_DATA_H