/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription;

@interface FBMThreadSnippet : FBValueObject <NSCoding, NSCopying> {

	BOOL _isUserText;
	NSString* _messageId;
	unsigned long long _timestamp;
	NSString* _senderId;
	FBStringWithRedactedDescription* _text;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                 //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isUserText;                                          //@synthesize isUserText=_isUserText - In the implementation block
-(NSString *)senderId;
-(id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 senderId:(id)arg3 text:(id)arg4 isUserText:(BOOL)arg5 ;
-(BOOL)isUserText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(FBStringWithRedactedDescription *)text;
-(NSString *)messageId;
@end

