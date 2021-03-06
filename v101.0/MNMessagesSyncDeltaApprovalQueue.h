/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaApprovalQueue : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	int __action;
	long long __recipientFbId;
	BOOL __messageMetadata_isset;
	BOOL __action_isset;
	BOOL __recipientFbId_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (assign,setter=setAction:,getter=action,nonatomic) int action; 
@property (assign,setter=setRecipientFbId:,getter=recipientFbId,nonatomic) long long recipientFbId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setRecipientFbId:(long long)arg1 ;
-(long long)recipientFbId;
-(BOOL)recipientFbIdIsSet;
-(void)unsetRecipientFbId;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)messageMetadataIsSet;
-(BOOL)actionIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(void)unsetAction;
-(void)unsetMessageMetadata;
-(id)initWithMessageMetadata:(id)arg1 action:(int)arg2 recipientFbId:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

