/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNServiceControlling, OS_dispatch_queue;
@class FBProvider, NSObject;

@interface MNIdleServiceDelayController : NSObject {

	id<MNServiceControlling> _serviceController;
	FBProvider* _mcContextManager;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithServiceController:(id)arg1 mobileConfigContextManagerProvider:(id)arg2 queue:(id)arg3 ;
-(void)handleTransitionFromLoggedInUIState;
@end

