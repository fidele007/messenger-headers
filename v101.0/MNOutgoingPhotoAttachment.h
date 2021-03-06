/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOutgoingAttachment.h>

@class NSData, NSString, NSURL;

@interface MNOutgoingPhotoAttachment : NSObject <FBOutgoingAttachment> {

	NSData* _attachmentData;
	NSString* _mimeType;
	NSString* _attachmentFilename;
	NSURL* _externalURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 externalURL:(id)arg4 ;
-(id)attachmentData;
-(id)mimeType;
-(id)externalURL;
-(id)attachmentFilename;
@end

