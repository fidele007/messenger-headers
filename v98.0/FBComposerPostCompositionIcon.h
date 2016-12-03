/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString, UIImage;

@interface FBComposerPostCompositionIcon : NSObject <NSCopying> {

	unsigned long long _subtype;
	long long _spinner_style;
	unsigned long long _glyphIcon_glyphName;
	UIColor* _glyphIcon_glyphColor;
	NSString* _networkImage_imageURL;
	UIImage* _networkImage_defaultImage;
	UIImage* _localImage;

}
+(id)glyphIconWithGlyphName:(unsigned long long)arg1 glyphColor:(id)arg2 ;
+(id)localImage:(id)arg1 ;
+(id)networkImageWithImageURL:(id)arg1 defaultImage:(id)arg2 ;
+(id)spinnerWithStyle:(long long)arg1 ;
-(void)matchSpinner:(/*^block*/id)arg1 glyphIcon:(/*^block*/id)arg2 networkImage:(/*^block*/id)arg3 localImage:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
