/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBNativeArticleOverlayProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBMessengerPageSubscriptionCTAViewDelegate.h>

@protocol FBMessengerPageSubscriptionCTAModalPresentationViewDelegate;
@class FBMessengerPageSubscriptionCTAView, NSString;

@interface FBMessengerPageSubscriptionCTAModalPresentationView : UIView <FBNativeArticleOverlayProtocol, UIGestureRecognizerDelegate, FBMessengerPageSubscriptionCTAViewDelegate> {

	FBMessengerPageSubscriptionCTAView* _pageSubscriptionCTAView;
	id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate> _delegate;
	double _sheetHeight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double sheetHeight;                                                                           //@synthesize sheetHeight=_sheetHeight - In the implementation block
@property (assign,nonatomic,__weak) id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)setContentVisible:(BOOL)arg1 animationConfig:(SCD_Struct_FB40)arg2 ;
-(void)setVisibilityPercentage:(double)arg1 ;
-(id)initWithViewModel:(id)arg1 imageDownloader:(id)arg2 ;
-(void)presentPageSubscriptionCTAView;
-(unsigned long long)pageSubscriptionState;
-(void)updateSubscriptionState:(unsigned long long)arg1 ;
-(void)didTapFollowButton:(id)arg1 ;
-(double)_ctaViewHeightThatFits:(CGSize)arg1 ;
-(void)_setSheetHeight:(double)arg1 withAnimationConfig:(SCD_Struct_FB40)arg2 completion:(/*^block*/id)arg3 ;
-(double)sheetHeight;
-(void)setSheetHeight:(double)arg1 ;
-(void)setDelegate:(id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBMessengerPageSubscriptionCTAModalPresentationViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end
