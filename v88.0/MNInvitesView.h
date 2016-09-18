/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNInvitesViewDelegate;
@class UIView, UIButton;

@interface MNInvitesView : UIView {

	UIView* _bottomBarView;
	UIView* _bottomBarTopBorder;
	UIButton* _bottomBarButton;
	BOOL _shouldShowBottomBar;
	BOOL _showsLoadingIndicator;
	UIView* _multiPeoplePickerView;
	id<MNInvitesViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL showsLoadingIndicator;                             //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIView * multiPeoplePickerView;                         //@synthesize multiPeoplePickerView=_multiPeoplePickerView - In the implementation block
@property (assign,nonatomic,__weak) id<MNInvitesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didPressBottomBarButton;
-(UIView *)multiPeoplePickerView;
-(id)initWithShouldShowBottomBar:(BOOL)arg1 ;
-(void)updateBottomBarButtonWithTitle:(id)arg1 ;
-(void)setMultiPeoplePickerView:(UIView *)arg1 ;
-(void)setDelegate:(id<MNInvitesViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNInvitesViewDelegate>)delegate;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
@end
