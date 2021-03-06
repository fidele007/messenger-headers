/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMSyncedThreadKey, FBStringWithRedactedDescription, FBMMessageAttachment, NSArray, NSDictionary, FBMMessageAttribution, FBMAdminText, FBMGenericAdmin, FBMCommerceMessageTypeInfo, FBExtensibleMessageData, FBMMessageSyncedExtensibleProperties;

@interface FBMMessageBuilder : NSObject {

	NSString* _messageId;
	NSString* _offlineThreadingId;
	FBMSyncedThreadKey* _threadKey;
	NSString* _senderId;
	FBStringWithRedactedDescription* _text;
	FBMMessageAttachment* _attachment;
	NSArray* _tags;
	NSDictionary* _logMessage;
	unsigned long long _timestamp;
	long long _actionId;
	FBMMessageAttribution* _attribution;
	long long _type;
	FBMAdminText* _adminText;
	FBMGenericAdmin* _genericAdmin;
	long long _messageLifeTime;
	BOOL _isSponsored;
	FBMCommerceMessageTypeInfo* _commerceMessageTypeInfo;
	FBExtensibleMessageData* _extensibleMessageData_DEPRECATED;
	FBMMessageSyncedExtensibleProperties* _syncedExtensibleProperties;

}
+(id)messageFromExistingMessage:(id)arg1 ;
+(id)message;
-(id)withType:(long long)arg1 ;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withSenderId:(id)arg1 ;
-(id)withThreadKey:(id)arg1 ;
-(id)withOfflineThreadingId:(id)arg1 ;
-(id)withAttribution:(id)arg1 ;
-(id)withSyncedExtensibleProperties:(id)arg1 ;
-(id)withMessageId:(id)arg1 ;
-(id)withText:(id)arg1 ;
-(id)withAttachment:(id)arg1 ;
-(id)withTags:(id)arg1 ;
-(id)withLogMessage:(id)arg1 ;
-(id)withActionId:(long long)arg1 ;
-(id)withAdminText:(id)arg1 ;
-(id)withGenericAdmin:(id)arg1 ;
-(id)withMessageLifeTime:(long long)arg1 ;
-(id)withIsSponsored:(BOOL)arg1 ;
-(id)withCommerceMessageTypeInfo:(id)arg1 ;
-(id)withExtensibleMessageData_DEPRECATED:(id)arg1 ;
-(id)build;
@end

