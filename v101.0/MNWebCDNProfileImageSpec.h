/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface MNWebCDNProfileImageSpec : FBValueObject <NSCopying, NSCoding> {

	double _circleDiameter;
	double _imagesSpacing;
	double _borderWidth;
	double _badgeDiameter;
	double _badgeOffsetLength;
	unsigned long long _badgeCutoffPosition;
	UIEdgeInsets _circleInsets;

}

@property (nonatomic,readonly) double circleDiameter;                               //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets circleInsets;                           //@synthesize circleInsets=_circleInsets - In the implementation block
@property (nonatomic,readonly) double imagesSpacing;                                //@synthesize imagesSpacing=_imagesSpacing - In the implementation block
@property (nonatomic,readonly) double borderWidth;                                  //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,readonly) double badgeDiameter;                                //@synthesize badgeDiameter=_badgeDiameter - In the implementation block
@property (nonatomic,readonly) double badgeOffsetLength;                            //@synthesize badgeOffsetLength=_badgeOffsetLength - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeCutoffPosition;              //@synthesize badgeCutoffPosition=_badgeCutoffPosition - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(double)badgeOffsetLength;
-(id)initWithCircleDiameter:(double)arg1 circleInsets:(UIEdgeInsets)arg2 imagesSpacing:(double)arg3 borderWidth:(double)arg4 badgeDiameter:(double)arg5 badgeOffsetLength:(double)arg6 badgeCutoffPosition:(unsigned long long)arg7 ;
-(UIEdgeInsets)circleInsets;
-(double)imagesSpacing;
-(double)badgeDiameter;
-(unsigned long long)badgeCutoffPosition;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)borderWidth;
-(double)circleDiameter;
@end
