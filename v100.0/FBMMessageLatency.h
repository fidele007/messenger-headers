/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageSendLatency, NSString;

@interface FBMMessageLatency : FBValueObject <NSCopying> {

	FBMMessageSendLatency* _sendLatency;
	double _rawDrReceivedTime;
	double _drHandledTime;
	double _createdTime;
	NSString* _mqttSessionId;

}

@property (nonatomic,copy,readonly) FBMMessageSendLatency * sendLatency;              //@synthesize sendLatency=_sendLatency - In the implementation block
@property (nonatomic,readonly) double rawDrReceivedTime;                              //@synthesize rawDrReceivedTime=_rawDrReceivedTime - In the implementation block
@property (nonatomic,readonly) double drHandledTime;                                  //@synthesize drHandledTime=_drHandledTime - In the implementation block
@property (nonatomic,readonly) double createdTime;                                    //@synthesize createdTime=_createdTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * mqttSessionId;                         //@synthesize mqttSessionId=_mqttSessionId - In the implementation block
-(double)createdTime;
-(id)initWithSendLatency:(id)arg1 rawDrReceivedTime:(double)arg2 drHandledTime:(double)arg3 createdTime:(double)arg4 mqttSessionId:(id)arg5 ;
-(FBMMessageSendLatency *)sendLatency;
-(double)rawDrReceivedTime;
-(double)drHandledTime;
-(NSString *)mqttSessionId;
@end

