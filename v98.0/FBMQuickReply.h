/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FBMQuickReplyContent;

@interface FBMQuickReply : FBValueObject <NSCoding, NSCopying> {

	NSString* _payload;
	NSString* _title;
	NSURL* _imageUrl;
	FBMQuickReplyContent* _content;

}

@property (nonatomic,copy,readonly) NSString * payload;                          //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageUrl;                            //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) FBMQuickReplyContent * content;              //@synthesize content=_content - In the implementation block
-(NSURL *)imageUrl;
-(id)initWithPayload:(id)arg1 title:(id)arg2 imageUrl:(id)arg3 content:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)payload;
-(NSString *)title;
-(FBMQuickReplyContent *)content;
@end
