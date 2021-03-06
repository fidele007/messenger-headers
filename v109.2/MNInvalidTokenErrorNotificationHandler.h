/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class OrcaMessengerRequestManager, NSNotificationCenter, NSString;

@interface MNInvalidTokenErrorNotificationHandler : NSObject <FBClassProvidable> {

	OrcaMessengerRequestManager* _orcaMessengerRequestManager;
	NSNotificationCenter* _notificationCenter;
	id _requesterInvalidTokenObserver;

}

@property (nonatomic,retain) OrcaMessengerRequestManager * orcaMessengerRequestManager;              //@synthesize orcaMessengerRequestManager=_orcaMessengerRequestManager - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id requesterInvalidTokenObserver;                                       //@synthesize requesterInvalidTokenObserver=_requesterInvalidTokenObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObservingNotification;
-(id)initWithOrcaMessengerRequestManager:(id)arg1 notificationCenter:(id)arg2 ;
-(void)_showSessionExpiredAlertDueToError:(id)arg1 ;
-(void)setRequesterInvalidTokenObserver:(id)arg1 ;
-(void)startObservingNotification;
-(OrcaMessengerRequestManager *)orcaMessengerRequestManager;
-(void)setOrcaMessengerRequestManager:(OrcaMessengerRequestManager *)arg1 ;
-(id)requesterInvalidTokenObserver;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
@end

