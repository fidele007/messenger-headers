/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBTimer, FBRetainCycleDetector, NSObject, FBCache, NSSet;

@interface FBRetainCycleDetectorManager : NSObject {

	FBTimer* _timer;
	FBRetainCycleDetector* _detector;
	NSObject*<OS_dispatch_queue> _queue;
	FBCache* _classAttributionCache;
	NSSet* _baseClasses;

}
+(id)sharedManager;
-(void)startRetainCycleDetection;
-(id)_expandBaseClasses:(id)arg1 ;
-(void)enableWithClasses:(id)arg1 ;
-(id)init;
@end

