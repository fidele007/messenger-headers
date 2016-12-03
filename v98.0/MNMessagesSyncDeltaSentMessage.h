/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSMutableArray, NSMutableDictionary, NSString;

@interface MNMessagesSyncDeltaSentMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSMutableArray* __attachments;
	int __ttl;
	NSMutableDictionary* __data;
	BOOL __messageMetadata_isset;
	BOOL __attachments_isset;
	BOOL __ttl_isset;
	BOOL __data_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setAttachments:,getter=attachments,nonatomic,retain) NSMutableArray * attachments; 
@property (assign,setter=setTtl:,getter=ttl,nonatomic) int ttl; 
@property (setter=setData:,getter=data,nonatomic,retain) NSMutableDictionary * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(BOOL)attachmentsIsSet;
-(BOOL)ttlIsSet;
-(void)unsetTtl;
-(BOOL)dataIsSet;
-(void)unsetData;
-(void)unsetMessageMetadata;
-(void)unsetAttachments;
-(id)initWithMessageMetadata:(id)arg1 attachments:(id)arg2 ttl:(int)arg3 data:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)attachments;
-(void)setAttachments:(NSMutableArray *)arg1 ;
-(void)validate;
-(int)ttl;
-(void)setTtl:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

