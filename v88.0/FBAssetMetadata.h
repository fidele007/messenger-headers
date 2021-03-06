/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CLLocation;

@interface FBAssetMetadata : FBValueObject <NSCopying, NSCoding> {

	long long _imageOrientation;
	double _duration;
	CLLocation* _location;
	CGSize _pixelSize;
	CGSize _originalPixelSize;

}

@property (nonatomic,readonly) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                        //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize originalPixelSize;                //@synthesize originalPixelSize=_originalPixelSize - In the implementation block
@property (nonatomic,readonly) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(id)initWithImageOrientation:(long long)arg1 pixelSize:(CGSize)arg2 originalPixelSize:(CGSize)arg3 duration:(double)arg4 location:(id)arg5 ;
-(CGSize)originalPixelSize;
-(double)duration;
-(long long)imageOrientation;
-(CLLocation *)location;
-(CGSize)pixelSize;
@end

