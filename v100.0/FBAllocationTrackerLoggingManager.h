/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBAllocationTrackerCTScanLogger;

@interface FBAllocationTrackerLoggingManager : NSObject {

	BOOL _userOptedIn;
	BOOL _passedGK;
	BOOL _forced;
	NSObject*<OS_dispatch_queue> _queue;
	FBAllocationTrackerCTScanLogger* _ctscanLogger;

}
+(void)startTrackingAllocationsIfEnabled;
+(id)sharedManager;
-(void)forceOn;
-(void)_startAllocationTrackerIfPossible;
-(void)_CTScanStartTrackingAllocations;
-(void)userOptedIn;
-(void)userPassedGK;
-(id)init;
@end

