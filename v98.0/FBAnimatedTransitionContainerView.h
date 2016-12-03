/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIViewController;

@interface FBAnimatedTransitionContainerView : UIView {

	CALayer* _dimmingLayer;
	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) CALayer * dimmingLayer; 
-(CALayer *)dimmingLayer;
-(void)_createDimmingLayerIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end

