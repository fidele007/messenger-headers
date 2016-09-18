/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingRegistrationStateStoreListening, OS_dispatch_queue;
@class MNUnprotectedCustomBlobStore, NSObject, MNSecureMessagingRegistrationState;

@interface MNSecureMessagingRegistrationStateStore : NSObject {

	MNUnprotectedCustomBlobStore* _unprotectedCustomBlobStore;
	id<MNSecureMessagingRegistrationStateStoreListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureMessagingRegistrationState* _currentRegistrationState;

}

@property (copy,readonly) MNSecureMessagingRegistrationState * currentRegistrationState;              //@synthesize currentRegistrationState=_currentRegistrationState - In the implementation block
-(id)readRegistrationState;
-(void)writeRegistrationState:(id)arg1 ;
-(id)initWithUnprotectedCustomBlobStore:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
@end
