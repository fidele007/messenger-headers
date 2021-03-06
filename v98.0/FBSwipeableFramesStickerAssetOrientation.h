/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSwipeableFramesStickerAssetOrientation : FBValueObject <NSCopying> {

	unsigned long long _sizeDimension;
	double _assetSize;
	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	double _horizontalMargin;
	double _verticalMargin;

}

@property (nonatomic,readonly) unsigned long long sizeDimension;                    //@synthesize sizeDimension=_sizeDimension - In the implementation block
@property (nonatomic,readonly) double assetSize;                                    //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) double horizontalMargin;                             //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) double verticalMargin;                               //@synthesize verticalMargin=_verticalMargin - In the implementation block
-(double)horizontalMargin;
-(double)assetSize;
-(unsigned long long)sizeDimension;
-(id)initWithSizeDimension:(unsigned long long)arg1 assetSize:(double)arg2 horizontalAlignment:(unsigned long long)arg3 verticalAlignment:(unsigned long long)arg4 horizontalMargin:(double)arg5 verticalMargin:(double)arg6 ;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(double)verticalMargin;
@end

