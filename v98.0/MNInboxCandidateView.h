/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNProfilePreviewing.h>

@protocol MNInboxCandidateViewDelegate;
@class UILabel, UIButton, UIImageView, UIView, UILongPressGestureRecognizer, MNInboxCandidateViewModel, NSString;

@interface MNInboxCandidateView : UIView <MNProfilePreviewing> {

	BOOL _useConnectionsContent;
	UILabel* _nameLabel;
	UILabel* _timelineContextLabel;
	UIButton* _addContactButton;
	UIButton* _inviteButton;
	UIButton* _hideButton;
	UIImageView* _profileImageView;
	UIImageView* _candidateViewMask;
	UIView* _containerView;
	long long _candidateType;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	MNInboxCandidateViewModel* _viewModel;
	id<MNInboxCandidateViewDelegate> _delegate;

}

@property (nonatomic,copy) MNInboxCandidateViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxCandidateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)updateProfileImage:(id)arg1 ;
-(id)initWithUseConnectionsContent:(BOOL)arg1 ;
-(void)_didLongPress:(id)arg1 ;
-(void)_didTapAddContactButton:(id)arg1 ;
-(void)_didTapInviteButton:(id)arg1 ;
-(void)_didTapHideButton:(id)arg1 ;
-(void)_updateTimelineContext;
-(void)_updateCandidateType;
-(void)_setScale:(double)arg1 withAlpha:(double)arg2 ;
-(void)_showHideMenuAtPoint:(CGPoint)arg1 ;
-(void)_didTapHideMenuItem:(id)arg1 ;
-(void)_didTapHideAllMenuItem:(id)arg1 ;
-(void)setDelegate:(id<MNInboxCandidateViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNInboxCandidateViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(MNInboxCandidateViewModel *)viewModel;
-(void)setViewModel:(MNInboxCandidateViewModel *)arg1 ;
-(void)_updateName;
@end

