/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIImage;

@interface FBWebRTCTintedImageCache : NSObject {

	NSMutableDictionary* _tintedImageCache;
	UIImage* _baseImage;

}

@property (nonatomic,readonly) UIImage * baseImage;              //@synthesize baseImage=_baseImage - In the implementation block
-(id)initWithBaseImage:(id)arg1 ;
-(id)imageWithTintColor:(id)arg1 ;
-(UIImage *)baseImage;
@end

