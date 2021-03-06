/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface FBPageComponentFlowShoppingCartTipBorderedBoxView : UIView {

	CAShapeLayer* _shapeLayer;
	BOOL _highlighted;
	unsigned long long _roundCorners;
	UIColor* _unhighlightedColor;
	UIColor* _highlightedColor;

}

@property (assign,nonatomic) unsigned long long roundCorners;              //@synthesize roundCorners=_roundCorners - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedColor;                 //@synthesize unhighlightedColor=_unhighlightedColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedColor;                   //@synthesize highlightedColor=_highlightedColor - In the implementation block
-(void)setUnhighlightedColor:(UIColor *)arg1 ;
-(UIColor *)unhighlightedColor;
-(unsigned long long)roundCorners;
-(void)setRoundCorners:(unsigned long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightedColor:(UIColor *)arg1 ;
-(UIColor *)highlightedColor;
-(BOOL)highlighted;
@end

