/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCancelable.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MNMediaFiltersManagerRemoveAction : NSObject <FBCancelable> {

	NSObject*<OS_dispatch_queue> _executionQueue;
	mutex _cancelMutex;
	BOOL _cancelled;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
-(void)removeFilterFromCaptureCoordinator:(id)arg1 captureCoordinatorLogger:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancel;
-(BOOL)isCancelled;
-(id)initWithExecutionQueue:(id)arg1 ;
@end

