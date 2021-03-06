/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBTransparentView.h>

@class FBInstantGameUIMetrics, CAGradientLayer, UIButton;

@interface FBInstantGameEndNavigationView : FBTransparentView {

	FBInstantGameUIMetrics* _metrics;
	CAGradientLayer* _gradientShadow;
	UIButton* _leftButton;
	UIButton* _middleButton;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton;                //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * middleButton;              //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;               //@synthesize rightButton=_rightButton - In the implementation block
-(UIButton *)middleButton;
-(void)layoutSubviews;
-(id)initWithConfig:(id)arg1 ;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

