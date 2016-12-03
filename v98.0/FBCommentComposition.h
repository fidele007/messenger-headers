/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBCommentPublishTarget, NSString, NSArray, NSData, FBCompositionLinkShare;

@interface FBCommentComposition : FBValueObject <NSCopying> {

	BOOL _isPrivate;
	FBCommentPublishTarget* _publishTarget;
	NSString* _authorGraphQLID;
	NSString* _body;
	NSArray* _mentions;
	NSArray* _hashtags;
	NSData* _photoData;
	NSString* _videoAssetID;
	NSString* _videoFBID;
	FBCompositionLinkShare* _linkShare;
	NSString* _stickerGraphQLID;
	NSString* _vodVideoTimestamp;
	NSString* _liveVideoTimestamp;
	CGSize _videoSize;

}

@property (nonatomic,copy,readonly) FBCommentPublishTarget * publishTarget;              //@synthesize publishTarget=_publishTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorGraphQLID;                          //@synthesize authorGraphQLID=_authorGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mentions;                                  //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashtags;                                  //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,copy,readonly) NSData * photoData;                                  //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoAssetID;                             //@synthesize videoAssetID=_videoAssetID - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                                         //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoFBID;                                //@synthesize videoFBID=_videoFBID - In the implementation block
@property (nonatomic,copy,readonly) FBCompositionLinkShare * linkShare;                  //@synthesize linkShare=_linkShare - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerGraphQLID;                         //@synthesize stickerGraphQLID=_stickerGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * vodVideoTimestamp;                        //@synthesize vodVideoTimestamp=_vodVideoTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * liveVideoTimestamp;                       //@synthesize liveVideoTimestamp=_liveVideoTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                           //@synthesize isPrivate=_isPrivate - In the implementation block
-(FBCommentPublishTarget *)publishTarget;
-(FBCompositionLinkShare *)linkShare;
-(NSString *)videoFBID;
-(NSArray *)hashtags;
-(NSString *)authorGraphQLID;
-(NSString *)stickerGraphQLID;
-(id)initWithPublishTarget:(id)arg1 authorGraphQLID:(id)arg2 body:(id)arg3 mentions:(id)arg4 hashtags:(id)arg5 photoData:(id)arg6 videoAssetID:(id)arg7 videoSize:(CGSize)arg8 videoFBID:(id)arg9 linkShare:(id)arg10 stickerGraphQLID:(id)arg11 vodVideoTimestamp:(id)arg12 liveVideoTimestamp:(id)arg13 isPrivate:(BOOL)arg14 ;
-(NSString *)videoAssetID;
-(NSString *)vodVideoTimestamp;
-(NSString *)liveVideoTimestamp;
-(NSString *)body;
-(NSArray *)mentions;
-(NSData *)photoData;
-(CGSize)videoSize;
-(BOOL)isPrivate;
@end

