/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageMessageViewModelContentPrefetchingListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface MNMontageViewModelContentPrefetchingTracker : NSObject <MNMontageMessageViewModelContentPrefetchingListener> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _remainingMessageKeys;
	NSMutableSet* _completedMessageKeys;
	/*^block*/id _completionBlock;
	/*^block*/id _progressBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_completeMessageWithKey:(id)arg1 ;
-(void)montageMessageViewModelContentPrefetchingSucceeded:(id)arg1 ;
-(void)montageMessageViewModelContentPrefetchingFailed:(id)arg1 ;
-(void)montageMessageViewModelContentPrefetchingSkipped:(id)arg1 ;
-(id)initWithQueue:(id)arg1 messages:(id)arg2 progressBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

