/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, MNPhotoViewModel, NSURL, MNPhotoMetadata;

@interface MNThreadSponsoredMessageSnippet : FBValueObject <NSCopying, NSCoding> {

	NSString* _messageId;
	unsigned long long _timestamp;
	NSString* _senderId;
	MNPhotoViewModel* _DEPRECATED_messagePhotoViewModel;
	NSURL* _imageURL;
	MNPhotoMetadata* _metadata;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                             //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                              //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoViewModel * DEPRECATED_messagePhotoViewModel;              //@synthesize DEPRECATED_messagePhotoViewModel=_DEPRECATED_messagePhotoViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoMetadata * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
-(MNPhotoViewModel *)DEPRECATED_messagePhotoViewModel;
-(id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 senderId:(id)arg3 DEPRECATED_messagePhotoViewModel:(id)arg4 imageURL:(id)arg5 metadata:(id)arg6 ;
-(NSString *)senderId;
-(unsigned long long)timestamp;
-(MNPhotoMetadata *)metadata;
-(NSURL *)imageURL;
-(NSString *)messageId;
@end

