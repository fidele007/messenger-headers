/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPlainPhotoSource, NSURL;

@interface MNVideoAttachmentViewModel : FBValueObject <NSCopying> {

	BOOL _showSoundButton;
	NSString* _offlineVideoId;
	NSString* _videoFbId;
	MNPlainPhotoSource* _thumbnailPhotoSource;
	NSURL* _videoURL;
	double _videoWidth;
	double _videoHeight;
	double _duration;
	long long _fileSizeInBytes;

}

@property (nonatomic,copy,readonly) NSString * offlineVideoId;                              //@synthesize offlineVideoId=_offlineVideoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoFbId;                                   //@synthesize videoFbId=_videoFbId - In the implementation block
@property (nonatomic,copy,readonly) MNPlainPhotoSource * thumbnailPhotoSource;              //@synthesize thumbnailPhotoSource=_thumbnailPhotoSource - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) double videoWidth;                                           //@synthesize videoWidth=_videoWidth - In the implementation block
@property (nonatomic,readonly) double videoHeight;                                          //@synthesize videoHeight=_videoHeight - In the implementation block
@property (nonatomic,readonly) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long fileSizeInBytes;                                   //@synthesize fileSizeInBytes=_fileSizeInBytes - In the implementation block
@property (nonatomic,readonly) BOOL showSoundButton;                                        //@synthesize showSoundButton=_showSoundButton - In the implementation block
-(MNPlainPhotoSource *)thumbnailPhotoSource;
-(NSString *)offlineVideoId;
-(double)videoWidth;
-(double)videoHeight;
-(long long)fileSizeInBytes;
-(NSString *)videoFbId;
-(BOOL)showSoundButton;
-(id)initWithOfflineVideoId:(id)arg1 videoFbId:(id)arg2 thumbnailPhotoSource:(id)arg3 videoURL:(id)arg4 videoWidth:(double)arg5 videoHeight:(double)arg6 duration:(double)arg7 fileSizeInBytes:(long long)arg8 showSoundButton:(BOOL)arg9 ;
-(double)duration;
-(NSURL *)videoURL;
@end

