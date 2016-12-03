/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBWebRTCGroupMultiViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	double _cornerRadius;
	unsigned long long _roundedCorners;
	UIColor* _dropShadowColor;
	double _dropShadowOpacity;
	double _dropShadowRadius;
	CGSize _dropShadowOffset;

}

@property (assign,nonatomic) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;              //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (nonatomic,copy) UIColor * dropShadowColor;                        //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) CGSize dropShadowOffset;                        //@synthesize dropShadowOffset=_dropShadowOffset - In the implementation block
@property (assign,nonatomic) double dropShadowOpacity;                       //@synthesize dropShadowOpacity=_dropShadowOpacity - In the implementation block
@property (assign,nonatomic) double dropShadowRadius;                        //@synthesize dropShadowRadius=_dropShadowRadius - In the implementation block
-(void)setDropShadowOffset:(CGSize)arg1 ;
-(void)setDropShadowOpacity:(double)arg1 ;
-(void)setDropShadowRadius:(double)arg1 ;
-(CGSize)dropShadowOffset;
-(double)dropShadowOpacity;
-(double)dropShadowRadius;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cornerRadius;
-(unsigned long long)roundedCorners;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(UIColor *)dropShadowColor;
@end
