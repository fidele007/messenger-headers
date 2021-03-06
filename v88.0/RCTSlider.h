/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISlider.h>

@class UIImage;

@interface RCTSlider : UISlider {

	float _unclippedValue;
	float _step;
	float _lastValue;
	/*^block*/id _onValueChange;
	/*^block*/id _onSlidingComplete;
	UIImage* _trackImage;

}

@property (nonatomic,copy) id onValueChange;                           //@synthesize onValueChange=_onValueChange - In the implementation block
@property (nonatomic,copy) id onSlidingComplete;                       //@synthesize onSlidingComplete=_onSlidingComplete - In the implementation block
@property (assign,nonatomic) float step;                               //@synthesize step=_step - In the implementation block
@property (assign,nonatomic) float lastValue;                          //@synthesize lastValue=_lastValue - In the implementation block
@property (nonatomic,retain) UIImage * trackImage;                     //@synthesize trackImage=_trackImage - In the implementation block
@property (nonatomic,retain) UIImage * minimumTrackImage; 
@property (nonatomic,retain) UIImage * maximumTrackImage; 
@property (nonatomic,retain) UIImage * thumbImage; 
-(void)setMinimumTrackImage:(UIImage *)arg1 ;
-(UIImage *)minimumTrackImage;
-(void)setMaximumTrackImage:(UIImage *)arg1 ;
-(UIImage *)maximumTrackImage;
-(void)setThumbImage:(UIImage *)arg1 ;
-(UIImage *)thumbImage;
-(id)onValueChange;
-(void)setOnValueChange:(id)arg1 ;
-(id)onSlidingComplete;
-(void)setOnSlidingComplete:(id)arg1 ;
-(float)lastValue;
-(void)setLastValue:(float)arg1 ;
-(void)setValue:(float)arg1 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(void)setTrackImage:(UIImage *)arg1 ;
-(UIImage *)trackImage;
-(float)step;
-(void)setStep:(float)arg1 ;
@end

