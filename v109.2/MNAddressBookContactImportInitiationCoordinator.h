/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiator.h>
#import <Messenger/MNContactsSyncLockDelegate.h>
#import <FBSharedFramework/MNAddressBookAccessRequestListener.h>

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
-(void)contactImportingLocked;
-(void)contactImportingUnlocked;
-(void)failedToLockContactImporting;
-(void)failedToUnlockContactImporting;
-(void)lockingContactImporting;
-(void)unlockingContactImporting;
-(id)initWithAddressBookAccessRequester:(id)arg1 contactsSyncLock:(id)arg2 listener:(id)arg3 ;
-(void)initiateContactImporting;
-(void)accessToAddressBookDenied;
-(void)accessToAddressBookGranted;
@end

