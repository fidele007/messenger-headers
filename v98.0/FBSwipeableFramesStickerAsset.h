/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, FBSwipeableFramesStickerAssetOrientation, NSURL;

@interface FBSwipeableFramesStickerAsset : FBValueObject <NSCopying> {

	NSString* _uri;
	UIImage* _image;
	long long _width;
	long long _height;
	FBSwipeableFramesStickerAssetOrientation* _portraitOrientation;
	FBSwipeableFramesStickerAssetOrientation* _landscapeOrientation;
	NSURL* _localURL;

}

@property (nonatomic,copy,readonly) NSString * uri;                                                               //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy,readonly) UIImage * image;                                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) long long width;                                                                   //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long height;                                                                  //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesStickerAssetOrientation * portraitOrientation;               //@synthesize portraitOrientation=_portraitOrientation - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesStickerAssetOrientation * landscapeOrientation;              //@synthesize landscapeOrientation=_landscapeOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localURL;                                                             //@synthesize localURL=_localURL - In the implementation block
-(FBSwipeableFramesStickerAssetOrientation *)landscapeOrientation;
-(FBSwipeableFramesStickerAssetOrientation *)portraitOrientation;
-(id)initWithUri:(id)arg1 image:(id)arg2 width:(long long)arg3 height:(long long)arg4 portraitOrientation:(id)arg5 landscapeOrientation:(id)arg6 localURL:(id)arg7 ;
-(UIImage *)image;
-(long long)width;
-(long long)height;
-(NSURL *)localURL;
-(NSString *)uri;
@end

