/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKenBurnsAnimatorViewDataSource.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNMomentsAppInviteAttachmentViewDelegate;
@class UILabel, NSMutableArray, FBNetworkImageView, FBKenBurnsAnimatorView, UIView, UITapGestureRecognizer, FBUserSession, MNMomentsAppInviteAttachmentViewModel, NSString;

@interface MNMomentsAppInviteAttachmentView : UIView <FBKenBurnsAnimatorViewDataSource, MNAttachmentView> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	NSMutableArray* _callToActionButtons;
	NSMutableArray* _separators;
	FBNetworkImageView* _singlePhotoImageView;
	FBKenBurnsAnimatorView* _kenBurnsAnimatorView;
	UIView* _photoView;
	UITapGestureRecognizer* _photoGR;
	FBUserSession* _session;
	id<MNMomentsAppInviteAttachmentViewDelegate> _delegate;
	MNMomentsAppInviteAttachmentViewModel* _inviteViewModel;

}

@property (nonatomic,copy) MNMomentsAppInviteAttachmentViewModel * inviteViewModel;                     //@synthesize inviteViewModel=_inviteViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNMomentsAppInviteAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_didTapButton:(id)arg1 ;
-(void)_didTapPhoto;
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(MNMomentsAppInviteAttachmentViewModel *)inviteViewModel;
-(void)setInviteViewModel:(MNMomentsAppInviteAttachmentViewModel *)arg1 ;
-(void)setDelegate:(id<MNMomentsAppInviteAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMomentsAppInviteAttachmentViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

