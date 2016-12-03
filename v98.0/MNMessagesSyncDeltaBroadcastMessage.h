/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface MNMessagesSyncDeltaBroadcastMessage : NSObject <TBase, NSCoding> {

	NSMutableArray* __messageMetadatas;
	NSString* __body;
	long long __stickerId;
	NSMutableArray* __attachments;
	BOOL __messageMetadatas_isset;
	BOOL __body_isset;
	BOOL __stickerId_isset;
	BOOL __attachments_isset;

}

@property (setter=setMessageMetadatas:,getter=messageMetadatas,nonatomic,retain) NSMutableArray * messageMetadatas; 
@property (setter=setBody:,getter=body,nonatomic,retain) NSString * body; 
@property (assign,setter=setStickerId:,getter=stickerId,nonatomic) long long stickerId; 
@property (setter=setAttachments:,getter=attachments,nonatomic,retain) NSMutableArray * attachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(long long)stickerId;
-(void)setStickerId:(long long)arg1 ;
-(NSMutableArray *)messageMetadatas;
-(id)initWithMessageMetadatas:(id)arg1 body:(id)arg2 stickerId:(long long)arg3 attachments:(id)arg4 ;
-(BOOL)bodyIsSet;
-(BOOL)stickerIdIsSet;
-(BOOL)attachmentsIsSet;
-(void)unsetBody;
-(void)setMessageMetadatas:(NSMutableArray *)arg1 ;
-(BOOL)messageMetadatasIsSet;
-(void)unsetMessageMetadatas;
-(void)unsetStickerId;
-(void)unsetAttachments;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)body;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(void)validate;
-(void)setBody:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end

