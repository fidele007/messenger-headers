/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
