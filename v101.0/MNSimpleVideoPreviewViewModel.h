/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNSimpleVideoPreviewViewModel : FBValueObject <NSCopying> {

	NSString* _videoUrl;
	NSString* _videoId;

}

@property (nonatomic,copy,readonly) NSString * videoUrl;              //@synthesize videoUrl=_videoUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoId;               //@synthesize videoId=_videoId - In the implementation block
-(NSString *)videoId;
-(NSString *)videoUrl;
-(id)initWithVideoUrl:(id)arg1 videoId:(id)arg2 ;
@end

