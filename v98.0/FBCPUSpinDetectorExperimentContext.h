/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBCPUSpinDetectorExperimentContext : FBExperimentContext {

	long long _threadPctTrigger;
	long long _processPctTrigger;
	BOOL _detectorEnabled;
	long long _periodSeconds;

}

@property (assign,nonatomic) long long threadPctTrigger;               //@synthesize threadPctTrigger=_threadPctTrigger - In the implementation block
@property (assign,nonatomic) long long processPctTrigger;              //@synthesize processPctTrigger=_processPctTrigger - In the implementation block
@property (assign,nonatomic) BOOL detectorEnabled;                     //@synthesize detectorEnabled=_detectorEnabled - In the implementation block
@property (assign,nonatomic) long long periodSeconds;                  //@synthesize periodSeconds=_periodSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)detectorEnabled;
-(long long)periodSeconds;
-(long long)processPctTrigger;
-(long long)threadPctTrigger;
-(void)setThreadPctTrigger:(long long)arg1 ;
-(void)setProcessPctTrigger:(long long)arg1 ;
-(void)setDetectorEnabled:(BOOL)arg1 ;
-(void)setPeriodSeconds:(long long)arg1 ;
@end

