/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, MNPlainPhotoSource, NSURL;

@interface FBVideoAttachmentInfo : FBValueObject <NSCopying> {

	BOOL _hasEdits;
	long long _videoType;
	NSString* _offlineVideoId;
	NSString* _offlineMessageId;
	double _duration;
	double _width;
	double _height;
	NSData* _videoData;
	unsigned long long _originalFileSize;
	unsigned long long _estimatedFileSize;
	NSString* _originalSha256Hash;
	MNPlainPhotoSource* _thumbnailPhotoSource;
	NSURL* _exportedLocalURL;

}

@property (nonatomic,readonly) long long videoType;                                         //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineVideoId;                              //@synthesize offlineVideoId=_offlineVideoId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineMessageId;                            //@synthesize offlineMessageId=_offlineMessageId - In the implementation block
@property (nonatomic,readonly) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double width;                                                //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                               //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSData * videoData;                                     //@synthesize videoData=_videoData - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFileSize;                         //@synthesize originalFileSize=_originalFileSize - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedFileSize;                        //@synthesize estimatedFileSize=_estimatedFileSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalSha256Hash;                          //@synthesize originalSha256Hash=_originalSha256Hash - In the implementation block
@property (nonatomic,copy,readonly) MNPlainPhotoSource * thumbnailPhotoSource;              //@synthesize thumbnailPhotoSource=_thumbnailPhotoSource - In the implementation block
@property (nonatomic,copy,readonly) NSURL * exportedLocalURL;                               //@synthesize exportedLocalURL=_exportedLocalURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEdits;                                               //@synthesize hasEdits=_hasEdits - In the implementation block
-(MNPlainPhotoSource *)thumbnailPhotoSource;
-(NSString *)offlineVideoId;
-(unsigned long long)originalFileSize;
-(unsigned long long)estimatedFileSize;
-(NSString *)originalSha256Hash;
-(NSURL *)exportedLocalURL;
-(id)initWithVideoType:(long long)arg1 offlineVideoId:(id)arg2 offlineMessageId:(id)arg3 duration:(double)arg4 width:(double)arg5 height:(double)arg6 videoData:(id)arg7 originalFileSize:(unsigned long long)arg8 estimatedFileSize:(unsigned long long)arg9 originalSha256Hash:(id)arg10 thumbnailPhotoSource:(id)arg11 exportedLocalURL:(id)arg12 hasEdits:(BOOL)arg13 ;
-(NSString *)offlineMessageId;
-(double)duration;
-(double)width;
-(double)height;
-(long long)videoType;
-(NSData *)videoData;
-(BOOL)hasEdits;
@end
