/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, FBMLocationAttachmentDataToSend;

@interface FBMLocationAttachmentData : FBValueObject <NSCopying, NSCoding> {

	NSData* _serializedExtensibleAttachment;
	FBMLocationAttachmentDataToSend* _dataToSend;

}

@property (nonatomic,copy,readonly) NSData * serializedExtensibleAttachment;                   //@synthesize serializedExtensibleAttachment=_serializedExtensibleAttachment - In the implementation block
@property (nonatomic,copy,readonly) FBMLocationAttachmentDataToSend * dataToSend;              //@synthesize dataToSend=_dataToSend - In the implementation block
-(NSData *)serializedExtensibleAttachment;
-(id)initWithSerializedExtensibleAttachment:(id)arg1 dataToSend:(id)arg2 ;
-(FBMLocationAttachmentDataToSend *)dataToSend;
@end

