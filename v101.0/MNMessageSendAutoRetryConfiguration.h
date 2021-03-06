/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessageSendAutoRetryConfiguration : FBValueObject <NSCopying> {

	BOOL _allowsInfiniteRetry;
	unsigned long long _maxNumberOfAttemptsOnSendExtension;
	unsigned long long _maxNumberOfAttemptsOnMQTT;
	unsigned long long _maxNumberOfAttemptsOnGraph;
	unsigned long long _maxSizeOfBatchOnMQTT;
	double _maxSendDuration;
	double _retryIntervalOnMQTTConnected;
	double _maxIntervalForRetryAfterRestoration;

}

@property (nonatomic,readonly) unsigned long long maxNumberOfAttemptsOnSendExtension;              //@synthesize maxNumberOfAttemptsOnSendExtension=_maxNumberOfAttemptsOnSendExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfAttemptsOnMQTT;                       //@synthesize maxNumberOfAttemptsOnMQTT=_maxNumberOfAttemptsOnMQTT - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfAttemptsOnGraph;                      //@synthesize maxNumberOfAttemptsOnGraph=_maxNumberOfAttemptsOnGraph - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSizeOfBatchOnMQTT;                            //@synthesize maxSizeOfBatchOnMQTT=_maxSizeOfBatchOnMQTT - In the implementation block
@property (nonatomic,readonly) double maxSendDuration;                                             //@synthesize maxSendDuration=_maxSendDuration - In the implementation block
@property (nonatomic,readonly) double retryIntervalOnMQTTConnected;                                //@synthesize retryIntervalOnMQTTConnected=_retryIntervalOnMQTTConnected - In the implementation block
@property (nonatomic,readonly) BOOL allowsInfiniteRetry;                                           //@synthesize allowsInfiniteRetry=_allowsInfiniteRetry - In the implementation block
@property (nonatomic,readonly) double maxIntervalForRetryAfterRestoration;                         //@synthesize maxIntervalForRetryAfterRestoration=_maxIntervalForRetryAfterRestoration - In the implementation block
-(double)maxSendDuration;
-(id)initWithMaxNumberOfAttemptsOnSendExtension:(unsigned long long)arg1 maxNumberOfAttemptsOnMQTT:(unsigned long long)arg2 maxNumberOfAttemptsOnGraph:(unsigned long long)arg3 maxSizeOfBatchOnMQTT:(unsigned long long)arg4 maxSendDuration:(double)arg5 retryIntervalOnMQTTConnected:(double)arg6 allowsInfiniteRetry:(BOOL)arg7 maxIntervalForRetryAfterRestoration:(double)arg8 ;
-(unsigned long long)maxNumberOfAttemptsOnGraph;
-(double)maxIntervalForRetryAfterRestoration;
-(unsigned long long)maxNumberOfAttemptsOnSendExtension;
-(unsigned long long)maxNumberOfAttemptsOnMQTT;
-(unsigned long long)maxSizeOfBatchOnMQTT;
-(double)retryIntervalOnMQTTConnected;
-(BOOL)allowsInfiniteRetry;
@end

