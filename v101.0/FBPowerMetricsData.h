/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBPMBatteryData, FBPMNetLoggerHelper, FBLocationDuration, FBPMCameraCaptureTime, FBCPUEnergy, FBDisplayBrightness;

@interface FBPowerMetricsData : NSObject {

	FBPMBatteryData* _batteryData;
	float _startBatteryLevel;
	long long _totalChargingTimeInMS;
	unique_ptr<FB::PowerMetrics::ProcessPMCpuStat, std::__1::default_delete<FB::PowerMetrics::ProcessPMCpuStat> >* _cpuState;
	unique_ptr<FB::NetStat::NetStats::Reading, std::__1::default_delete<FB::NetStat::NetStats::Reading> >* _processNetStat;
	FBPMNetLoggerHelper* _mqttLoggerHelper;
	FBLocationDuration* _locationDuration;
	FBPMCameraCaptureTime* _cameraTime;
	CameraTimeStat _cameraStat;
	PowerModelConfig _modelConfig;
	FBCPUEnergy* _cpuEnergy;
	double _cpuEnergyValue;
	FBDisplayBrightness* _displayBrightness;
	DisplayBrightnessInfo _displayBrightnessInfo;
	double _networkEnergy;
	double _cameraEnergy;

}
-(id)updateData;
-(id)_takeSnapshotWithUpdateCurrent:(BOOL)arg1 ;
-(id)diffSinceLastUpdate;
-(id)init;
@end
