/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingRegistrationStateReading.h>
#import <Messenger/MNSecureMessagingRegistrationStateStoreListening.h>

@protocol OS_dispatch_queue;
@class MNSecureMessagingRegistrationState, NSObject, NSString;

@interface MNSecureMessagingRegistrationStateCache : NSObject <MNSecureMessagingRegistrationStateReading, MNSecureMessagingRegistrationStateStoreListening> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	MNSecureMessagingRegistrationState* _currentRegistrationState;

}

@property (copy) MNSecureMessagingRegistrationState * currentRegistrationState;              //@synthesize currentRegistrationState=_currentRegistrationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentRegistrationState:(MNSecureMessagingRegistrationState *)arg1 ;
-(void)didUpdateRegistrationState:(id)arg1 ;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
-(id)initWithUpdateQueue:(id)arg1 ;
@end

