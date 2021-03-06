/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNAuthenticationOptionsViewDelegate;
@class MNAuthenticationOptionsHeaderView, MNStackedContainerView, MNAuthenticationOptionsButtonsContainerView;

@interface MNAuthenticationOptionsView : UIView {

	MNAuthenticationOptionsHeaderView* _headerView;
	MNStackedContainerView* _stackedContainerView;
	MNAuthenticationOptionsButtonsContainerView* _buttonsContainerView;
	id<MNAuthenticationOptionsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAuthenticationOptionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_configureActionForLoginWithFacebookButton;
-(void)_configureActionForNotOnFacebookButton;
-(void)_didPressLoginWithFacebookButton;
-(void)_didPressNotOnFacebookButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNAuthenticationOptionsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNAuthenticationOptionsViewDelegate>)delegate;
@end

