/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MNMultiBarAudioVisualizerView : UIView {

	int _barsCount;
	UIColor* _barColor;
	double _barWidth;
	double _barSpacing;
	double _barAnimationInterval;

}

@property (assign,nonatomic) int barsCount;                            //@synthesize barsCount=_barsCount - In the implementation block
@property (nonatomic,retain) UIColor * barColor;                       //@synthesize barColor=_barColor - In the implementation block
@property (assign,nonatomic) double barWidth;                          //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double barSpacing;                        //@synthesize barSpacing=_barSpacing - In the implementation block
@property (assign,nonatomic) double barAnimationInterval;              //@synthesize barAnimationInterval=_barAnimationInterval - In the implementation block
-(void)setBarsCount:(int)arg1 ;
-(void)setBarAnimationInterval:(double)arg1 ;
-(void)setAllBarsHeight:(double)arg1 animated:(BOOL)arg2 ;
-(int)barsCount;
-(void)setBarHeight:(double)arg1 index:(int)arg2 animated:(BOOL)arg3 ;
-(void)_updateBarsColor;
-(double)_limitHeight:(double)arg1 ;
-(CGRect)_barFrameWithLeft:(double)arg1 height:(double)arg2 ;
-(void)_updateBar:(id)arg1 height:(double)arg2 ;
-(double)barAnimationInterval;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBarWidth:(double)arg1 ;
-(void)setBarSpacing:(double)arg1 ;
-(double)barWidth;
-(double)barSpacing;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
@end

