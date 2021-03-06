/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@class MNMontageViewModelSubscriptionServiceProvider, MNViewModelSubscriptionServiceHandler, NSString;

@interface MNMontageViewModelSubscriptionService : NSObject <FBClassInjectable, MNServiceControllable, MNViewModelSubscriptionService> {

	MNMontageViewModelSubscriptionServiceProvider* _serviceProvider;
	MNViewModelSubscriptionServiceHandler* _serviceHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)startSubscription:(id)arg1 ;
-(void)cancelSubscription:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
-(id)serviceProvider;
@end

