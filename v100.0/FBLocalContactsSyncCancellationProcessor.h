/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsSyncStatusListener.h>
#import <Messenger/FBContactImportPermissionListener.h>

@protocol FBAddressBookSyncer, FBLocalContactsSyncCancellationListener, FBLocalContactsUploader;
@class NSString;

@interface FBLocalContactsSyncCancellationProcessor : NSObject <FBLocalContactsSyncStatusListener, FBContactImportPermissionListener> {

	id<FBAddressBookSyncer> _addressBookSyncer;
	unsigned long long _currentState;
	id<FBLocalContactsSyncCancellationListener> _listener;
	id<FBLocalContactsUploader> _localContactsUploader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImportingAllowed;
-(void)contactImportingDisallowed;
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(id)initWithAddressBookSyncer:(id)arg1 localContactsUploader:(id)arg2 listener:(id)arg3 ;
@end

