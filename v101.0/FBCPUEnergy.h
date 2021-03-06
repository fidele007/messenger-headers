/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class FBTimer, NSObject;

@interface FBCPUEnergy : NSObject {

	FBTimer* _timer;
	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<FB::PowerMetrics::ProcessPMCpuStat, std::__1::default_delete<FB::PowerMetrics::ProcessPMCpuStat> >* _cpuInfo;
	atomic<double> _cpuEnergy;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _currentTimeInSec;
	CPU _highFreqModel;
	CPU _lowFreqModel;

}

@property (nonatomic,readonly) CPU highFreqModel;              //@synthesize highFreqModel=_highFreqModel - In the implementation block
@property (nonatomic,readonly) CPU lowFreqModel;               //@synthesize lowFreqModel=_lowFreqModel - In the implementation block
+(id)sharedCPUEnergyWithCPUHighFreq:(CPU)arg1 andLowFreq:(CPU)arg2 ;
-(id)initPrivateWithHighFreqMode:(CPU)arg1 andLowFreqMode:(CPU)arg2 ;
-(void)_updateCPUEnergy;
-(double)cpuEnergy;
-(CPU)highFreqModel;
-(CPU)lowFreqModel;
-(id)init;
@end

