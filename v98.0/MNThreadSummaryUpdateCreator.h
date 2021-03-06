/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadClientSummaryUpdateCreating.h>

@protocol MNAuthenticationManager;
@class MNThreadSummaryClientUpdateCreationState, NSString;

@interface MNThreadSummaryUpdateCreator : NSObject <MNThreadClientSummaryUpdateCreating> {

	MNThreadSummaryClientUpdateCreationState* _creationState;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canCreateUpdateOfType:(long long)arg1 ;
-(id)createUpdateWithCreationInfo:(id)arg1 ;
-(id)_createUpdateForInfoWithSyncedThreadKey:(id)arg1 creationInfo:(id)arg2 ;
-(id)_createUpdateForInfoWithSecureThreadKey:(id)arg1 creationInfo:(id)arg2 ;
-(id)_createImplicitReadUpdateForThreadKeyIfPossible:(id)arg1 ;
-(id)_createExplicitReadUpdateForThreadKeyIfPossible:(id)arg1 ;
-(id)_createUnreadUpdateForThreadKeyIfPossible:(id)arg1 ;
-(id)initWithCreationState:(id)arg1 authManager:(id)arg2 ;
-(NSString *)description;
@end

