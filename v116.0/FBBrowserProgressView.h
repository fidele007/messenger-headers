/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBAnimatedProgressBarView, UIColor;

@interface FBBrowserProgressView : UIView {

	FBAnimatedProgressBarView* _animatedProgressView;
	BOOL _recyclingView;
	BOOL _loading;
	UIColor* _color;
	double _progress;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL loading;                 //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

