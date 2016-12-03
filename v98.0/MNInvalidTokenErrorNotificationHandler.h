/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

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
-(id)initWithProviderMapData:(id)arg1 ;
-(void)stopObservingNotification;
-(id)initWithOrcaMessengerRequestManager:(id)arg1 notificationCenter:(id)arg2 ;
-(void)_showSessionExpiredAlertDueToError:(id)arg1 ;
-(void)setRequesterInvalidTokenObserver:(id)arg1 ;
-(void)startObservingNotification;
-(OrcaMessengerRequestManager *)orcaMessengerRequestManager;
-(void)setOrcaMessengerRequestManager:(OrcaMessengerRequestManager *)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id)requesterInvalidTokenObserver;
-(void)dealloc;
-(NSNotificationCenter *)notificationCenter;
@end

