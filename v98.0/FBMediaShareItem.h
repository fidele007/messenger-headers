/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBAssetMetadata, NSDate;

@interface FBMediaShareItem : FBValueObject <NSCopying, NSCoding> {

	BOOL _isLivePhoto;
	BOOL _livePhotoHasPlayed;
	BOOL _isLikely360Photo;
	NSString* _assetID;
	NSString* _dataSourceID;
	unsigned long long _indexHint;
	FBAssetMetadata* _metadata;
	unsigned long long _mediaShareItemType;
	unsigned long long _quality;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSString * assetID;                            //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceID;                       //@synthesize dataSourceID=_dataSourceID - In the implementation block
@property (nonatomic,readonly) unsigned long long indexHint;                       //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,copy,readonly) FBAssetMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaShareItemType;              //@synthesize mediaShareItemType=_mediaShareItemType - In the implementation block
@property (nonatomic,readonly) unsigned long long quality;                         //@synthesize quality=_quality - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL isLivePhoto;                                   //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (nonatomic,readonly) BOOL livePhotoHasPlayed;                            //@synthesize livePhotoHasPlayed=_livePhotoHasPlayed - In the implementation block
@property (nonatomic,readonly) BOOL isLikely360Photo;                              //@synthesize isLikely360Photo=_isLikely360Photo - In the implementation block
-(NSString *)assetID;
-(unsigned long long)indexHint;
-(BOOL)livePhotoHasPlayed;
-(BOOL)isLikely360Photo;
-(unsigned long long)mediaShareItemType;
-(id)initWithAssetID:(id)arg1 dataSourceID:(id)arg2 indexHint:(unsigned long long)arg3 metadata:(id)arg4 mediaShareItemType:(unsigned long long)arg5 quality:(unsigned long long)arg6 creationDate:(id)arg7 isLivePhoto:(BOOL)arg8 livePhotoHasPlayed:(BOOL)arg9 isLikely360Photo:(BOOL)arg10 ;
-(NSString *)dataSourceID;
-(FBAssetMetadata *)metadata;
-(unsigned long long)quality;
-(NSDate *)creationDate;
-(BOOL)isLivePhoto;
@end

