/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNAsyncOperationMainThreadUsageMonitor : NSObject {

	long long _maxOperationsPerHunderdMilliseconds;
	unsigned long long _continuousPeriod;
	NSMutableArray* _timestamps;

}
-(id)initWithMaxAllowedFrequency:(long long)arg1 inContinuousPeriod:(unsigned long long)arg2 ;
-(void)_checkAbnormalUsageAndReset;
-(void)recordNewAsyncOperationIfOnMainThread;
-(id)init;
@end

