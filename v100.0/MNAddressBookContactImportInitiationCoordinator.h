/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiator.h>
#import <Messenger/MNContactsSyncLockDelegate.h>
#import <Messenger/MNAddressBookAccessRequestListener.h>

@protocol FBAddressBookAccessRequester, MNContactsSyncLock, MNContactImportInitiationListener;
@class NSString;

@interface MNAddressBookContactImportInitiationCoordinator : NSObject <MNContactImportInitiator, MNContactsSyncLockDelegate, MNAddressBookAccessRequestListener> {

	id<FBAddressBookAccessRequester> _addressBookAccessRequester;
	id<MNContactsSyncLock> _contactsSyncLock;
	id<MNContactImportInitiationListener> _listener;
	unsigned long long _initiationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accessToAddressBookDenied;
-(void)accessToAddressBookGranted;
-(void)contactImportingLocked;
-(void)contactImportingUnlocked;
-(void)failedToLockContactImporting;
-(void)failedToUnlockContactImporting;
-(void)lockingContactImporting;
-(void)unlockingContactImporting;
-(void)initiateContactImporting;
-(id)initWithAddressBookAccessRequester:(id)arg1 contactsSyncLock:(id)arg2 listener:(id)arg3 ;
@end

