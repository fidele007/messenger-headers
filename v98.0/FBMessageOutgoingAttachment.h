/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMessageOutgoingAttachmentContent, NSDictionary;

@interface FBMessageOutgoingAttachment : FBValueObject <NSCopying, NSCoding> {

	FBMessageOutgoingAttachmentContent* _content;
	NSDictionary* _extraLoggingData;

}

@property (nonatomic,copy,readonly) FBMessageOutgoingAttachmentContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraLoggingData;                           //@synthesize extraLoggingData=_extraLoggingData - In the implementation block
-(id)initWithContent:(id)arg1 extraLoggingData:(id)arg2 ;
-(NSDictionary *)extraLoggingData;
-(FBMessageOutgoingAttachmentContent *)content;
@end

