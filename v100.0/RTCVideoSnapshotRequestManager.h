/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock;

@interface RTCVideoSnapshotRequestManager : NSObject {

	NSMutableArray* _requests;
	NSLock* _lock;
	/*^block*/id _dispatchLaterBlock;

}
-(void)addSnapshotRequest:(id)arg1 ;
-(BOOL)completePendingSnapshotRequests:(/*^block*/id)arg1 ;
-(id)initWithDispatchLaterBlock:(/*^block*/id)arg1 ;
-(void)_scheduleTimeoutForSnapshotRequest:(id)arg1 ;
-(void)_abortSnapshotRequestIfStillPending:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)abort;
@end

