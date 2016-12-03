/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setProgress:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)progress;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

