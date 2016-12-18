/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNThreadMessageSubscribing.h>
#import <Messenger/MNServiceControllable.h>

@protocol OS_dispatch_queue, MNThreadMessageSubscribing;
@class NSObject, MNOmniMMessageSubscribingServiceInjector, NSString;

@interface MNOmniMMessageSubscribingService : NSObject <FBClassInjectable, MNThreadMessageSubscribing, MNServiceControllable> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MNThreadMessageSubscribing> _messageSubscriberQueueDispatcher;
	MNOmniMMessageSubscribingServiceInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)_handleDirectivesFromMessage:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
