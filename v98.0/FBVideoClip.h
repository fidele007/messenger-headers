/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsset, FBVideoAssetEdits;

@interface FBVideoClip : NSObject <NSCopying> {

	AVAsset* _asset;
	FBVideoAssetEdits* _edits;
	GLKMatrix4 _playbackTransform;

}

@property (nonatomic,readonly) AVAsset * asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
@property (nonatomic,retain) FBVideoAssetEdits * edits;                                           //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB24 timeRangeForAudioAndVideo; 
@property (nonatomic,readonly) _GLKMatrix4 playbackTransform;                                     //@synthesize playbackTransform=_playbackTransform - In the implementation block
@property (nonatomic,readonly) CGAffineTransform videoTrackTransform; 
@property (nonatomic,readonly) unsigned long long estimatedAssetByteCount; 
@property (nonatomic,readonly) unsigned long long estimatedAssetTranscodedByteCount; 
+(void)removeTemporaryFilesAtURLs:(id)arg1 ;
-(FBVideoAssetEdits *)edits;
-(void)setEdits:(FBVideoAssetEdits *)arg1 ;
-(id)initWithAsset:(id)arg1 edits:(id)arg2 ;
-(CGAffineTransform)videoTrackTransform;
-(SCD_Struct_FB24)timeRangeForAudioAndVideo;
-(unsigned long long)estimatedAssetByteCount;
-(unsigned long long)estimatedAssetTranscodedByteCount;
-(_GLKMatrix4)playbackTransform;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVAsset *)asset;
-(CGSize)preferredSize;
@end

