/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBActivitySession;

@interface FBMotionActivity : NSObject {

	unsigned long long _activity;
	unsigned long long _activityUnknownReason;
	double _confidence;
	FBActivitySession* _activitySession;

}

@property (nonatomic,readonly) unsigned long long activity;                           //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) unsigned long long activityUnknownReason;              //@synthesize activityUnknownReason=_activityUnknownReason - In the implementation block
@property (nonatomic,readonly) double confidence;                                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) FBActivitySession * activitySession;                   //@synthesize activitySession=_activitySession - In the implementation block
+(BOOL)validMotionActivity:(id)arg1 ;
-(id)_initWithActivity:(unsigned long long)arg1 activityUnknownReason:(unsigned long long)arg2 confidence:(double)arg3 activitySession:(id)arg4 ;
-(id)initWithUnknowActivityReason:(unsigned long long)arg1 activitySession:(id)arg2 ;
-(id)initWithActivity:(unsigned long long)arg1 confidence:(double)arg2 activitySession:(id)arg3 ;
-(unsigned long long)activityUnknownReason;
-(FBActivitySession *)activitySession;
-(unsigned long long)activity;
-(double)confidence;
@end

