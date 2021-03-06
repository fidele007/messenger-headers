/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMGroupThreadKey, FBMThreadJoinableGroupInfoClientUpdate, FBStringWithRedactedDescription, FBMSyncedThreadKey, NSString, FBMMessageReactionClientUpdate;

@interface MNThreadGraphQLMutationRunnerAction : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMGroupThreadKey* _updateJoinableGroupInfo_groupThreadKey;
	FBMThreadJoinableGroupInfoClientUpdate* _updateJoinableGroupInfo_joinableGroupInfoClientUpdate;
	FBMGroupThreadKey* _updateThreadDescription_groupThreadKey;
	FBStringWithRedactedDescription* _updateThreadDescription_newThreadDescription;
	FBMSyncedThreadKey* _updateMessageReaction_threadKey;
	NSString* _updateMessageReaction_messageId;
	NSString* _updateMessageReaction_userId;
	FBMMessageReactionClientUpdate* _updateMessageReaction_messageReactionClientUpdate;
	FBMSyncedThreadKey* _updateMentionMuteSetting_threadKey;
	unsigned long long _updateMentionMuteSetting_muteSetting;
	FBMSyncedThreadKey* _updateReactionMuteSetting_threadKey;
	unsigned long long _updateReactionMuteSetting_muteSetting;

}
+(id)updateJoinableGroupInfoWithGroupThreadKey:(id)arg1 joinableGroupInfoClientUpdate:(id)arg2 ;
+(id)updateThreadDescriptionWithGroupThreadKey:(id)arg1 newThreadDescription:(id)arg2 ;
+(id)updateMessageReactionWithThreadKey:(id)arg1 messageId:(id)arg2 userId:(id)arg3 messageReactionClientUpdate:(id)arg4 ;
+(id)updateMentionMuteSettingWithThreadKey:(id)arg1 muteSetting:(unsigned long long)arg2 ;
+(id)updateReactionMuteSettingWithThreadKey:(id)arg1 muteSetting:(unsigned long long)arg2 ;
-(void)matchUpdateJoinableGroupInfo:(/*^block*/id)arg1 updateThreadDescription:(/*^block*/id)arg2 updateMessageReaction:(/*^block*/id)arg3 updateMentionMuteSetting:(/*^block*/id)arg4 updateReactionMuteSetting:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

