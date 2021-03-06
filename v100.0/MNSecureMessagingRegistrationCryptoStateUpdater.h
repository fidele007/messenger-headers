/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingCryptoStateSaving.h>
#import <Messenger/MNSecureMessagingRegistrationStateCreating.h>
#import <Messenger/MNSecureMessagingRegistrationStateUpdating.h>

@protocol MNSecureMessagingRegistrationStateUpdateListening, MNSecureMessagingRegisteredDeviceStatusChangeListening, OS_dispatch_queue, FBClock;
@class MNSecureMessagingCryptoKeychainStore, MNSecureMessagingRegistrationStateStore, NSObject, NSString;

@interface MNSecureMessagingRegistrationCryptoStateUpdater : NSObject <MNSecureMessagingCryptoStateSaving, MNSecureMessagingRegistrationStateCreating, MNSecureMessagingRegistrationStateUpdating> {

	id<MNSecureMessagingRegistrationStateUpdateListening> _registrationFlowListener;
	id<MNSecureMessagingRegisteredDeviceStatusChangeListening> _registeredDeviceStatusChangeListener;
	MNSecureMessagingCryptoKeychainStore* _keychainStore;
	MNSecureMessagingRegistrationStateStore* _registrationStore;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_writeRegistrationState:(id)arg1 ;
-(id)_readRegistrationState;
-(BOOL)_updateRegisteredCollectionSettingsWithBlock:(/*^block*/id)arg1 ;
-(long long)setDidBeginRegistrationOfCryptoState:(id)arg1 registrationIdentifier:(id)arg2 ;
-(BOOL)setDidCompleteRegistrationWithDeviceStatus:(long long)arg1 registrationIdentifier:(id)arg2 ;
-(BOOL)setDidFailRegistrationRequestWithIdentifier:(id)arg1 ;
-(BOOL)updateCodeName:(id)arg1 ;
-(BOOL)updateCryptoState:(id)arg1 ;
-(BOOL)updateRegisteredDeviceStatus:(long long)arg1 ;
-(id)initWithKeychainStore:(id)arg1 registrationStore:(id)arg2 clock:(id)arg3 registrationFlowListener:(id)arg4 registeredDeviceStatusChangeListener:(id)arg5 queue:(id)arg6 ;
-(void)resetAllState;
@end

