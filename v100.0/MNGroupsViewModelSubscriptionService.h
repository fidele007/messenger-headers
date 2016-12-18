/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNViewModelSubscriptionService.h>

@class MNGroupsViewModelSubscriptionServiceProvider, MNViewModelSubscriptionServiceHandler, NSString;

@interface MNGroupsViewModelSubscriptionService : NSObject <MNServiceControllable, MNViewModelSubscriptionService> {

	MNGroupsViewModelSubscriptionServiceProvider* _serviceProvider;
	MNViewModelSubscriptionServiceHandler* _serviceHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)additionalPageRequesterForSubscriptionServiceTypePrimary:(long long)arg1 ;
-(id)startSubscription:(id)arg1 ;
-(id)roomSuggestionsRefreshManager;
-(void)cancelSubscription:(id)arg1 ;
-(id)initWithThreadListServiceDependencies:(id)arg1 handlerChainManager:(id)arg2 userSessionObservingCenter:(id)arg3 roomsModelController:(id)arg4 presenceSubscriptionService:(id)arg5 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
