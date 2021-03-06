/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBVideoAsset;

@interface MNLocalVideoAsset : FBValueObject <NSCopying, NSCoding> {

	FBVideoAsset* _videoAsset;
	double _duration;
	CGSize _videoSize;

}

@property (nonatomic,copy,readonly) FBVideoAsset * videoAsset;              //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                            //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
-(id)initWithVideoAsset:(id)arg1 videoSize:(CGSize)arg2 duration:(double)arg3 ;
-(double)duration;
-(CGSize)videoSize;
-(FBVideoAsset *)videoAsset;
@end

