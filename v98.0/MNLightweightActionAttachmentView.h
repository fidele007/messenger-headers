/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNLightweightActionAttachmentViewController;
@class UIImageView, UIButton, UILabel, NSString, CAAnimationGroup, MNLightweightActionAttachmentViewModel;

@interface MNLightweightActionAttachmentView : UIView <MNAttachmentView> {

	UIImageView* _backgroundImageView;
	UIButton* _backgroundCircleButton;
	UIImageView* _backgroundCircleImageViewBlue;
	UILabel* _emojiLabel;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	BOOL _isSentByUser;
	BOOL _isOptimisticRender;
	NSString* _lightweightActionState;
	NSString* _lightweightActionType;
	NSString* _lightweightActionId;
	NSString* _emojiText;
	double _emojiAngle;
	CAAnimationGroup* _emojiAnimationGroup;
	CAAnimationGroup* _blueCircleAnimationGroup;
	MNLightweightActionAttachmentViewModel* _lightweightActionAttachmentViewModel;
	id<MNLightweightActionAttachmentViewController> _delegate;

}

@property (nonatomic,copy) MNLightweightActionAttachmentViewModel * lightweightActionAttachmentViewModel;              //@synthesize lightweightActionAttachmentViewModel=_lightweightActionAttachmentViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNLightweightActionAttachmentViewController> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withLightweightActionAttachmentViewModel:(id)arg2 ;
-(void)_lightweightActionButtonTapped;
-(MNLightweightActionAttachmentViewModel *)lightweightActionAttachmentViewModel;
-(void)setLightweightActionAttachmentViewModel:(MNLightweightActionAttachmentViewModel *)arg1 ;
-(BOOL)_canRespondToAction;
-(void)_setViewContents;
-(void)_addEmojiAnimations;
-(void)_removeEmojiAnimations;
-(void)setDelegate:(id<MNLightweightActionAttachmentViewController>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<MNLightweightActionAttachmentViewController>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

