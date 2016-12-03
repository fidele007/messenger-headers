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

@class UIColor;

@interface MNBadgedProfileImageSpec : FBValueObject <NSCopying> {

	double _profileImageDiameter;
	double _profileImageElementsSpacing;
	double _profileImageBorderWidth;
	unsigned long long _badgePosition;
	double _badgeOffsetLength;
	long long _badgeSize;
	UIColor* _backgroundColor;
	UIEdgeInsets _profileImageInsets;

}

@property (nonatomic,readonly) double profileImageDiameter;                     //@synthesize profileImageDiameter=_profileImageDiameter - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets profileImageInsets;                 //@synthesize profileImageInsets=_profileImageInsets - In the implementation block
@property (nonatomic,readonly) double profileImageElementsSpacing;              //@synthesize profileImageElementsSpacing=_profileImageElementsSpacing - In the implementation block
@property (nonatomic,readonly) double profileImageBorderWidth;                  //@synthesize profileImageBorderWidth=_profileImageBorderWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long badgePosition;                //@synthesize badgePosition=_badgePosition - In the implementation block
@property (nonatomic,readonly) double badgeOffsetLength;                        //@synthesize badgeOffsetLength=_badgeOffsetLength - In the implementation block
@property (nonatomic,readonly) long long badgeSize;                             //@synthesize badgeSize=_badgeSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithProfileImageDiameter:(double)arg1 profileImageInsets:(UIEdgeInsets)arg2 profileImageElementsSpacing:(double)arg3 profileImageBorderWidth:(double)arg4 badgePosition:(unsigned long long)arg5 badgeOffsetLength:(double)arg6 badgeSize:(long long)arg7 backgroundColor:(id)arg8 ;
-(double)profileImageDiameter;
-(UIEdgeInsets)profileImageInsets;
-(double)profileImageBorderWidth;
-(double)badgeOffsetLength;
-(unsigned long long)badgePosition;
-(double)profileImageElementsSpacing;
-(UIColor *)backgroundColor;
-(long long)badgeSize;
@end

