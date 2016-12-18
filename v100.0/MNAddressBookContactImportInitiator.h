/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/MNContactImportInitiator.h>

@protocol FBContactImporter;
@class MNAddressBook, MNAddressBookContactImportInitiationCoordinator, MNContactImportInitiationListenerAnnouncer, MNGraphGlobalContactsSyncLock, MNUserSettings, MNContactImportInitationAnalyticsLogger, NSString;

@interface MNAddressBookContactImportInitiator : NSObject <MNContactImportInitiationListener, MNContactImportInitiator> {

	MNAddressBook* _addressBook;
	id<FBContactImporter> _contactImporter;
	MNAddressBookContactImportInitiationCoordinator* _initiationCoordinator;
	MNContactImportInitiationListenerAnnouncer* _initiationEventAnnouncer;
	MNGraphGlobalContactsSyncLock* _syncLock;
	MNUserSettings* _userSettings;
	MNContactImportInitationAnalyticsLogger* _contactImportInitiationAnalyticsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)initiateContactImporting;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 listener:(id)arg4 contactImportInitiationAnalyticsLogger:(id)arg5 addressBook:(id)arg6 ;
-(void)dealloc;
@end
