/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImportedContactsSyncListener.h>
#import <Messenger/FBImportedContactRemovalListener.h>

@protocol MNImportedContactsAccumulationListener;
@class NSArray, NSString;

@interface MNImportedContactsAccumulator : NSObject <FBImportedContactsSyncListener, FBImportedContactRemovalListener> {

	id<MNImportedContactsAccumulationListener> _listener;
	NSArray* _accumulatedImportedContacts;
	NSArray* _accumulatedImportedContactsFromCurrentImport;

}

@property (nonatomic,retain) NSArray * accumulatedImportedContacts;                               //@synthesize accumulatedImportedContacts=_accumulatedImportedContacts - In the implementation block
@property (nonatomic,retain) NSArray * accumulatedImportedContactsFromCurrentImport;              //@synthesize accumulatedImportedContactsFromCurrentImport=_accumulatedImportedContactsFromCurrentImport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)successfullyRemovedImportedSyncPerson:(id)arg1 ;
-(void)contactImportStartedForNumberOfContacts:(unsigned long long)arg1 ;
-(void)contactImportProgressedWithStatus:(id)arg1 ;
-(void)contactImportCompleted;
-(void)contactImportFailed;
-(void)contactImportFailedDueToContactImportingBeingLocked;
-(void)contactImportCancelled;
-(void)setAccumulatedImportedContacts:(NSArray *)arg1 ;
-(void)setAccumulatedImportedContactsFromCurrentImport:(NSArray *)arg1 ;
-(void)failedToRemoveImportedSyncPerson:(id)arg1 ;
-(NSArray *)accumulatedImportedContacts;
-(NSArray *)accumulatedImportedContactsFromCurrentImport;
-(id)initWithListener:(id)arg1 ;
-(void)reset;
@end
