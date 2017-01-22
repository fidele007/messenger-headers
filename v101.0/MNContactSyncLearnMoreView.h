/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNContactSyncLearnMoreDisclaimerViewDelegate.h>

@protocol MNContactSyncLearnMoreViewDelegate;
@class MNStackedContainerView, MNHeaderView, MNContactSyncLearnMoreDisclaimerView, MNButton, NSString;

@interface MNContactSyncLearnMoreView : UIView <MNContactSyncLearnMoreDisclaimerViewDelegate> {

	MNStackedContainerView* _stackedContainerView;
	MNHeaderView* _headerView;
	MNContactSyncLearnMoreDisclaimerView* _disclaimerView;
	MNButton* _turnOnButton;
	MNButton* _notNowButton;
	id<MNContactSyncLearnMoreViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactSyncLearnMoreViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactSyncLearnMoreDisclaimerViewDidPressManageContacts:(id)arg1 ;
-(void)_turnOnButtonPressed;
-(void)_notNowButtonPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNContactSyncLearnMoreViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNContactSyncLearnMoreViewDelegate>)delegate;
@end
