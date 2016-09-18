/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSSet;

@interface FBImageDominantColorPicker : NSObject {

	char* _rawData;
	unsigned long long _pixelCount;
	NSSet* _paletteColors;
	mutex _paletteColorsLock;

}
-(id)initWithImage:(id)arg1 maxPixelSize:(double)arg2 ;
-(id)dominantColorWithOptions:(long long)arg1 ;
-(id)_dominantColorsWithOptions:(long long)arg1 ;
-(id)_getOrComputePaletteColors;
-(id)dominantColorPaletteWithOptions:(long long)arg1 ;
-(void)dealloc;
@end
