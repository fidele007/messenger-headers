/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface FBMQTTConnPublishMessage : NSObject <TBase, NSCoding> {

	NSString* __thrift_topic;
	int __thrift_messageId;
	NSData* __thrift_payload;
	BOOL __thrift_topic_set;
	BOOL __thrift_messageId_set;
	BOOL __thrift_payload_set;

}

@property (nonatomic,retain) NSString * topic; 
@property (assign,nonatomic) int messageId; 
@property (nonatomic,retain) NSData * payload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)messageIdIsSet;
-(void)unsetMessageId;
-(id)initWithTopic:(id)arg1 messageId:(int)arg2 payload:(id)arg3 ;
-(BOOL)topicIsSet;
-(void)unsetTopic;
-(BOOL)payloadIsSet;
-(void)unsetPayload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)write:(id)arg1 ;
-(int)messageId;
-(void)setMessageId:(int)arg1 ;
@end

