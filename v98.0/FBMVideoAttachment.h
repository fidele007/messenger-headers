/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMAttachment.h>

@class MNPlainPhotoSource;

@interface FBMVideoAttachment : FBMAttachment {

	long long _videoType;
	double _duration;
	MNPlainPhotoSource* _thumbnailPhotoSource;

}

@property (assign,nonatomic) long long videoType;                                  //@synthesize videoType=_videoType - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) MNPlainPhotoSource * thumbnailPhotoSource;              //@synthesize thumbnailPhotoSource=_thumbnailPhotoSource - In the implementation block
-(MNPlainPhotoSource *)thumbnailPhotoSource;
-(void)setVideoType:(long long)arg1 ;
-(void)setThumbnailPhotoSource:(MNPlainPhotoSource *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)videoType;
@end
