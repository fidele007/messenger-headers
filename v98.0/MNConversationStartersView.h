/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNHighlighting.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNThreadPreviewing.h>

@protocol MNAvatarImageDecorating, MNConversationStartersViewDelegate;
@class UIImageView, UILabel, MNPresence, FBLazyCreator, MNConversationStarterViewModel, MNProfileImageView, MNThreadCellLayout, UIImage, NSString;

@interface MNConversationStartersView : UIView <MNHighlighting, MNProfilePreviewing, MNThreadPreviewing> {

	UIImageView* _presenceIndicator;
	UILabel* _threadNameLabel;
	UILabel* _snippetLabel;
	UILabel* _presenceLabel;
	UIImageView* _presenceImageView;
	MNPresence* _presence;
	FBLazyCreator* _lightweightActionButtonCreator;
	BOOL _selected;
	BOOL _highlighted;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNConversationStarterViewModel* _conversationStarterViewModel;
	MNProfileImageView* _profileImageView;
	MNThreadCellLayout* _threadCellLayout;
	UIImage* _descriptionIcon;
	id<MNConversationStartersViewDelegate> _delegate;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) id<MNAvatarImageDecorating> avatarImageDecoration;                          //@synthesize avatarImageDecoration=_avatarImageDecoration - In the implementation block
@property (nonatomic,retain) MNConversationStarterViewModel * conversationStarterViewModel;              //@synthesize conversationStarterViewModel=_conversationStarterViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageView * profileImageView;                               //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) MNThreadCellLayout * threadCellLayout;                                        //@synthesize threadCellLayout=_threadCellLayout - In the implementation block
@property (nonatomic,copy) UIImage * descriptionIcon;                                                    //@synthesize descriptionIcon=_descriptionIcon - In the implementation block
@property (nonatomic,retain) UIImage * lightweightActionIcon; 
@property (assign,nonatomic,__weak) id<MNConversationStartersViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                              //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                                           //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForViewModel:(id)arg1 width:(double)arg2 threadCellLayout:(id)arg3 ;
-(MNProfileImageView *)profileImageView;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableThreadAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id<MNAvatarImageDecorating>)avatarImageDecoration;
-(void)setAvatarImageDecoration:(id<MNAvatarImageDecorating>)arg1 ;
-(void)setConversationStarterViewModel:(MNConversationStarterViewModel *)arg1 ;
-(void)setDescriptionIcon:(UIImage *)arg1 ;
-(MNConversationStarterViewModel *)conversationStarterViewModel;
-(id)lightweightActionButtonCreator;
-(void)_updateDrawCellAsSelected;
-(void)_layoutContentViews;
-(double)_maxSnippetWidth;
-(double)_maxTitleWidth;
-(UIImage *)lightweightActionIcon;
-(double)_maxTextWidth;
-(void)_updateDescriptionText;
-(void)_updateBadgeType;
-(void)_updatePresence;
-(void)_updateDescriptionAttibutedStringWithIcon;
-(void)_tappedLightweightActionButton:(id)arg1 ;
-(void)setLightweightActionIcon:(UIImage *)arg1 ;
-(MNThreadCellLayout *)threadCellLayout;
-(void)setThreadCellLayout:(MNThreadCellLayout *)arg1 ;
-(UIImage *)descriptionIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNConversationStartersViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNConversationStartersViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)highlighted;
-(BOOL)selected;
-(void)_updateTitle;
@end
