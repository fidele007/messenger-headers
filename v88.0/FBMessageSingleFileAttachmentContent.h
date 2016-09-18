/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBMessageSingleFileAttachmentContent : FBValueObject <NSCopying> {

	NSString* _offlineFileId;
	NSURL* _fileURL;
	NSString* _filename;

}

@property (nonatomic,copy,readonly) NSString * offlineFileId;              //@synthesize offlineFileId=_offlineFileId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
-(id)initWithOfflineFileId:(id)arg1 fileURL:(id)arg2 filename:(id)arg3 ;
-(NSString *)offlineFileId;
-(NSURL *)fileURL;
-(NSString *)filename;
@end
