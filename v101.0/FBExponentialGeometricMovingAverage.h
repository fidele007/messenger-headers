/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMovingAverage.h>

@class NSString;

@interface FBExponentialGeometricMovingAverage : NSObject <FBMovingAverage> {

	double _decayConstant;
	unsigned long long _cutOver;
	double _average;
	unsigned long long _count;
	unsigned long long _lastSampleTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double average;                                 //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) unsigned long long lastSampleTime;              //@synthesize lastSampleTime=_lastSampleTime - In the implementation block
-(void)addMeasurement:(double)arg1 weight:(double)arg2 ;
-(void)addMeasurement:(double)arg1 ;
-(unsigned long long)lastSampleTime;
-(id)initWithDecayConstant:(double)arg1 ;
-(BOOL)hasOneOrMoreMeasurements;
-(unsigned long long)count;
-(void)reset;
-(double)average;
@end
