/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, CAAnimation, UILabel;

@interface MNNuxBubbleView : UIView {

	UIView* _backgroundView;
	UIImageView* _closeImageView;
	CAAnimation* _iconAnimation;
	UIImageView* _iconImageView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
-(void)_removeIconAnimation;
-(void)_addIconAnimationIfNecessary;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 font:(id)arg3 text:(id)arg4 iconImage:(id)arg5 iconAnimation:(id)arg6 showCloseButton:(BOOL)arg7 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsets;
-(CGSize)intrinsicContentSize;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end

