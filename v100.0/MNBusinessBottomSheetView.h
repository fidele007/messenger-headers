/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNBusinessBottomSheetViewDelegate;
@class UINavigationBar, UIBarButtonItem, UIView, NSString;

@interface MNBusinessBottomSheetView : UIView {

	UINavigationBar* _navigationBar;
	UIBarButtonItem* _navigationBarSpacer;
	UIView* _viewToPresent;
	UIView* _invisibleStatusBarView;
	double _displayHeightRatio;
	NSString* _title;
	id<MNBusinessBottomSheetViewDelegate> _delegate;

}

@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<MNBusinessBottomSheetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(id)initWithTitle:(id)arg1 closeButtonTitle:(id)arg2 viewToPresent:(id)arg3 displayHeightRatio:(double)arg4 ;
-(CGSize)_statusBarViewSize;
-(double)_maxHeightForCurrentOrientation;
-(void)setDelegate:(id<MNBusinessBottomSheetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNBusinessBottomSheetViewDelegate>)delegate;
-(NSString *)title;
@end
