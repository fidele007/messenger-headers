/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNInboxVideoPreviewViewModel : FBValueObject <NSCopying> {

	NSString* _videoUrl;
	NSString* _videoId;
	NSString* _imagePreviewUrl;

}

@property (nonatomic,copy,readonly) NSString * videoUrl;                     //@synthesize videoUrl=_videoUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoId;                      //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePreviewUrl;              //@synthesize imagePreviewUrl=_imagePreviewUrl - In the implementation block
-(NSString *)videoId;
-(id)initWithVideoUrl:(id)arg1 videoId:(id)arg2 imagePreviewUrl:(id)arg3 ;
-(NSString *)imagePreviewUrl;
-(NSString *)videoUrl;
@end

