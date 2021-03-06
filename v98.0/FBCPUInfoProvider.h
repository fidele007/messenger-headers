/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBackgroundStateManaging;
@class FBProcTimer;

@interface FBCPUInfoProvider : NSObject {

	double _accumulatedUserBackgroundCPUTime;
	double _accumulatedSystemBackgroundCPUTime;
	double _lastTotalUserCPUTimeWhenFGToBG;
	double _lastTotalSystemCPUTimeWhenFGToBG;
	FBProcTimer* _procTimer;
	double _accumulatedBackgroundProcTime;
	double _lastTotalProcTimeWhenFGToBG;
	id<FBBackgroundStateManaging> _backgroundStateManager;
	unsigned long long _isFromFgToBgInPrevChg;

}
-(id)initWithProcTimer:(id)arg1 backgroundStateManaging:(id)arg2 ;
-(void)updateBackgroundCPUTime:(unsigned long long)arg1 ;
-(id)collectCPUInfo:(unsigned long long)arg1 ;
@end

