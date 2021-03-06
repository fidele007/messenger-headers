/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBActionableTableViewCell.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNThreadCellRequestActionViewDelegate.h>
#import <Messenger/MNThreadPreviewing.h>
#import <Messenger/MNGroupsRoomShareCTAViewDelegate.h>

@protocol MNAvatarImageDecorating;
@class UIImageView, UILabel, FBLazyCreator, MNThreadRow, MNThreadCellConfiguration, MNProfileImageView, MNThreadSnippetView, MNThreadGenericSnippetView, MNInboxImpressionLoggingData, NSString;

@interface MNThreadCell : FBActionableTableViewCell <MNProfilePreviewing, MNThreadCellRequestActionViewDelegate, MNThreadPreviewing, MNGroupsRoomShareCTAViewDelegate> {

	UIImageView* _presenceIndicator;
	UILabel* _threadNameLabel;
	UILabel* _timestampLabel;
	FBLazyCreator* _promotedLabelCreator;
	FBLazyCreator* _statusIndicatorCreator;
	FBLazyCreator* _messageSendingIndicatorCreator;
	FBLazyCreator* _receiptStateViewCreator;
	BOOL _drawCellAsSelected;
	FBLazyCreator* _moreButtonCreator;
	FBLazyCreator* _muteButtonCreator;
	FBLazyCreator* _unmuteButtonCreator;
	FBLazyCreator* _deleteButtonCreator;
	FBLazyCreator* _hideButtonCreator;
	FBLazyCreator* _hideAllButtonCreator;
	FBLazyCreator* _ignoreButtonCreator;
	FBLazyCreator* _typingViewCreator;
	FBLazyCreator* _firstCTAButtonCreator;
	FBLazyCreator* _secondCTAButtonCreator;
	FBLazyCreator* _montageButtonCreator;
	FBLazyCreator* _nameLabelBadgeViewCreator;
	FBLazyCreator* _requestActionViewCreator;
	FBLazyCreator* _shareRoomCTAViewCreator;
	BOOL _showsShareRoomCTAView;
	MNThreadRow* _threadRow;
	MNThreadCellConfiguration* _configuration;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNProfileImageView* _profileImageView;
	FBLazyCreator* _seenHeadListViewCreator;
	FBLazyCreator* _montageThumbnailViewCreator;
	MNThreadSnippetView* _threadSnippetView;
	MNThreadGenericSnippetView* _threadGenericSnippetView;
	MNInboxImpressionLoggingData* _inboxLoggingData;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,copy,readonly) MNThreadRow * threadRow;                                       //@synthesize threadRow=_threadRow - In the implementation block
@property (nonatomic,copy,readonly) MNThreadCellConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<MNAvatarImageDecorating> avatarImageDecoration;                    //@synthesize avatarImageDecoration=_avatarImageDecoration - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadCellDelegate> delegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                                            //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) FBLazyCreator * seenHeadListViewCreator;                            //@synthesize seenHeadListViewCreator=_seenHeadListViewCreator - In the implementation block
@property (nonatomic,readonly) FBLazyCreator * montageThumbnailViewCreator;                        //@synthesize montageThumbnailViewCreator=_montageThumbnailViewCreator - In the implementation block
@property (nonatomic,readonly) MNThreadSnippetView * threadSnippetView;                            //@synthesize threadSnippetView=_threadSnippetView - In the implementation block
@property (nonatomic,readonly) MNThreadGenericSnippetView * threadGenericSnippetView;              //@synthesize threadGenericSnippetView=_threadGenericSnippetView - In the implementation block
@property (assign,nonatomic) BOOL showsShareRoomCTAView;                                           //@synthesize showsShareRoomCTAView=_showsShareRoomCTAView - In the implementation block
@property (nonatomic,copy) MNInboxImpressionLoggingData * inboxLoggingData;                        //@synthesize inboxLoggingData=_inboxLoggingData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNProfileImageView *)profileImageView;
-(id<MNAvatarImageDecorating>)avatarImageDecoration;
-(void)setAvatarImageDecoration:(id<MNAvatarImageDecorating>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 stickerResourceManager:(id)arg3 ;
-(MNThreadRow *)threadRow;
-(BOOL)showsShareRoomCTAView;
-(void)_didTapStatusIndicator:(id)arg1 ;
-(void)_didTapCTAButton:(id)arg1 ;
-(void)_didTapMontageButton:(id)arg1 ;
-(void)_updateCellBackgroundWithSelectedState:(BOOL)arg1 ;
-(void)_didTapMore:(id)arg1 ;
-(void)_didTapMute:(id)arg1 ;
-(void)_didTapUnmute:(id)arg1 ;
-(void)_didTapIgnore:(id)arg1 ;
-(void)_didTapDelete:(id)arg1 ;
-(void)_didTapHideAll:(id)arg1 ;
-(void)_didTapHide:(id)arg1 ;
-(void)_layoutContentViews;
-(double)_maxTitleWidth;
-(double)_threadNameLabelHeight;
-(double)_maxSnippetWidth;
-(double)_genericSnippetRightMargin;
-(CGSize)_seenStateListViewSize;
-(CGRect)_frameForReceiptStateWithSize:(CGSize)arg1 ;
-(BOOL)_statusIndicatorShouldRecognizeTaps;
-(CGRect)_frameForPromotedLabelWithSize:(CGSize)arg1 ;
-(double)_maxTextWidth;
-(BOOL)_isGenericSnippetVisible;
-(double)_maxSeenHeadListWidth;
-(double)_receiptStateViewsWidth;
-(BOOL)_canShowGenericSnippet;
-(void)_updatePromotedLabel;
-(void)_updateGenericSnippetViewVisibility;
-(void)_updateCellImagesWithRow:(id)arg1 selectedState:(BOOL)arg2 ;
-(void)_setShowsTyping:(BOOL)arg1 ;
-(void)_updateCTAButtons;
-(void)_updateMontageThumbnailView;
-(BOOL)_hasMontage;
-(void)_updateAccessibilityCustomActions;
-(BOOL)_hasPromotionText;
-(void)_updateTypingViewShowsShadow;
-(BOOL)_isMontageVisible;
-(id)_backgroundColorWithSelectedState:(BOOL)arg1 ;
-(void)_updateMontageThumbnailMaskColor;
-(void)_updateCTAButton:(id)arg1 forAction:(id)arg2 ;
-(void)setDrawCellAsSelected:(BOOL)arg1 ;
-(void)_updateReceiptAndSeenHeadViewsWithReceiptState:(unsigned long long)arg1 statusIndicatorHidden:(BOOL)arg2 ;
-(void)_updateDrawCellAsSelected;
-(void)_didTapUnmuteAX:(id)arg1 ;
-(void)_didTapMuteAX:(id)arg1 ;
-(void)_didTapDeleteAX:(id)arg1 ;
-(void)_didTapMoreAX:(id)arg1 ;
-(void)_threadPreviewHideAction;
-(void)_threadPreviewHideAllAction;
-(void)_threadPreviewUnmuteAction;
-(void)_threadPreviewMuteAction;
-(void)_threadPreviewIgnoreAction;
-(void)_threadPreviewDeleteAction;
-(void)_threadPreviewMoreAction;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)threadCellRequestActionViewDidTapAccept:(id)arg1 ;
-(void)threadCellRequestActionViewDidTapDecline:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(id)previewableThreadAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)roomShareCTAView:(id)arg1 didTapShareRoomWithLocalThreadKey:(id)arg2 ;
-(void)setThreadRow:(id)arg1 configuration:(id)arg2 ;
-(void)loadActionPanelView;
-(void)setShowsShareRoomCTAView:(BOOL)arg1 ;
-(FBLazyCreator *)seenHeadListViewCreator;
-(FBLazyCreator *)montageThumbnailViewCreator;
-(MNThreadSnippetView *)threadSnippetView;
-(MNThreadGenericSnippetView *)threadGenericSnippetView;
-(MNInboxImpressionLoggingData *)inboxLoggingData;
-(void)setInboxLoggingData:(MNInboxImpressionLoggingData *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(UIEdgeInsets)contentInset;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(MNThreadCellConfiguration *)configuration;
@end

