/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, FBStringWithRedactedDescription, MNAPNSAttachment, NSArray, NSDictionary, FBMGenericAdmin;

@interface MNAPNSMessage : FBValueObject <NSCopying> {

	NSString* _messageId;
	NSString* _offlineThreadingId;
	FBMSyncedThreadKey* _threadKey;
	NSString* _senderId;
	FBStringWithRedactedDescription* _text;
	MNAPNSAttachment* _attachment;
	NSArray* _attachmentPlaceholders;
	NSDictionary* _shareMapPlaceholder;
	NSArray* _tags;
	unsigned long long _timestamp;
	long long _type;
	FBMGenericAdmin* _genericAdmin;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                       //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                      //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                 //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) MNAPNSAttachment * attachment;                       //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachmentPlaceholders;                    //@synthesize attachmentPlaceholders=_attachmentPlaceholders - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * shareMapPlaceholder;                  //@synthesize shareMapPlaceholder=_shareMapPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) FBMGenericAdmin * genericAdmin;                      //@synthesize genericAdmin=_genericAdmin - In the implementation block
-(NSString *)senderId;
-(FBMGenericAdmin *)genericAdmin;
-(NSString *)offlineThreadingId;
-(NSArray *)attachmentPlaceholders;
-(NSDictionary *)shareMapPlaceholder;
-(id)initWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 threadKey:(id)arg3 senderId:(id)arg4 text:(id)arg5 attachment:(id)arg6 attachmentPlaceholders:(id)arg7 shareMapPlaceholder:(id)arg8 tags:(id)arg9 timestamp:(unsigned long long)arg10 type:(long long)arg11 genericAdmin:(id)arg12 ;
-(unsigned long long)timestamp;
-(long long)type;
-(FBStringWithRedactedDescription *)text;
-(NSArray *)tags;
-(MNAPNSAttachment *)attachment;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)messageId;
@end

