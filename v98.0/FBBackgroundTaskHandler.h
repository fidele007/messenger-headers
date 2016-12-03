/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBBackgroundStateManaging;
@class NSObject, NSMutableDictionary;

@interface FBBackgroundTaskHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queuePerformer;
	unsigned long long _fbTaskId;
	NSMutableDictionary* _idsMap;
	id<FBBackgroundStateManaging> _backgroundStateManager;

}
+(id)sharedInstance;
-(void)waitForBackgroundTask:(/*^block*/id)arg1 performer:(id)arg2 ;
-(id)initWithBackgroundStateManager:(id)arg1 serialQueuePerformer:(id)arg2 ;
-(unsigned long long)_addTaskId;
-(BOOL)_mapTaskId:(unsigned long long)arg1 withUIBackgroundIdentifier:(unsigned long long)arg2 ;
-(unsigned long long)_removeTaskId:(unsigned long long)arg1 ;
-(unsigned long long)_mappingCount;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
@end

