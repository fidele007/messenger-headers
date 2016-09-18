/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/CAAnimationDelegate.h>

@class UIView, UILabel, UITableView, UISwitch, UIButton, NSString;

@interface FBBugReportInitialForkView : UIView <CAAnimationDelegate> {

	UIView* _rectangleWithRoundedCornerView;
	UIView* _overlay;
	UILabel* _title;
	UIView* _cancelButtonBackground;
	int _desiredTinesTableViewHeight;
	UITableView* _tinesTableView;
	UISwitch* _shakeToReportSwitch;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UITableView * tinesTableView;                //@synthesize tinesTableView=_tinesTableView - In the implementation block
@property (nonatomic,retain) UISwitch * shakeToReportSwitch;              //@synthesize shakeToReportSwitch=_shakeToReportSwitch - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) int desiredTinesTableViewHeight;                       //@synthesize desiredTinesTableViewHeight=_desiredTinesTableViewHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)colorForComponent:(int)arg1 ;
-(void)setTinesTableView:(UITableView *)arg1 ;
-(id)initWithShakeToReportSetting:(BOOL)arg1 ;
-(UISwitch *)shakeToReportSwitch;
-(void)setDesiredTinesTableViewHeight:(int)arg1 ;
-(UITableView *)tinesTableView;
-(void)showCancelButtonPressedState;
-(void)showCancelButtonUnpressedState;
-(int)desiredTinesTableViewHeight;
-(void)setShakeToReportSwitch:(UISwitch *)arg1 ;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)animateIn;
@end
