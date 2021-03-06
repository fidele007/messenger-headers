/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsSyncStatusListener.h>

@protocol FBLocalContactsSyncStatusListener;
@class FBSyncedLocalContactsDeduplicationTracker, NSString;

@interface FBSyncedLocalContactsDeduplicator : NSObject <FBLocalContactsSyncStatusListener> {

	id<FBLocalContactsSyncStatusListener> _listener;
	FBSyncedLocalContactsDeduplicationTracker* _deduplicationTracker;

}

@property (nonatomic,retain) FBSyncedLocalContactsDeduplicationTracker * deduplicationTracker;              //@synthesize deduplicationTracker=_deduplicationTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(void)setDeduplicationTracker:(FBSyncedLocalContactsDeduplicationTracker *)arg1 ;
-(FBSyncedLocalContactsDeduplicationTracker *)deduplicationTracker;
-(id)initWithListener:(id)arg1 ;
@end

