/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNMessagesNuxViewDelegate.h>
#import <Messenger/FBToastContainerViewDelegate.h>
#import <Messenger/MNMessagesViewing.h>

@protocol MNMessagesViewComposing, MNFullScreenNullStateViewing, MNMessagesViewingDelegate, MNMessagesNuxView;
@class MNCollectionView, MNMessagesBottomBarView, MNParticleSystemView, FBToastContainerView, MNLoadingView, NSMutableArray, FBListViewScrollManager, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, NSString;

@interface MNMessagesView : UIView <UIGestureRecognizerDelegate, MNMessagesNuxViewDelegate, FBToastContainerViewDelegate, MNMessagesViewing> {

	MNLoadingView* _loadingView;
	NSMutableArray* _scrollStateStack;
	FBListViewScrollManager* _scrollManager;
	CGRect _keyboardFrame;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _collectionViewTapRecognizer;
	UITapGestureRecognizer* _collectionViewDoubleTapRecognizer;
	UITapGestureRecognizer* _nullStateViewTapRecognizer;
	UIView*<MNMessagesViewComposing> _currentComposingView;
	MNParticleSystemView* _particleSystemView;
	UIView*<MNFullScreenNullStateViewing> _fullScreenNullStateView;
	UIView* _miniAppView;
	BOOL _collectionFooterViewIsHidden;
	double _miniAppMessageListVerticalSpace;
	BOOL _showingFullScreenNullStateView;
	id<MNMessagesViewingDelegate> _delegate;
	MNCollectionView* _collectionView;
	MNMessagesBottomBarView* _bottomBarView;
	FBToastContainerView* _topToastContainerView;
	FBToastContainerView* _bottomToastContainerView;
	long long _bottomToastContainerPosition;
	double _bottomToastContainerYOffset;
	UIView* _threadMontageView;
	UIView* _collectionFooterView;
	UIView*<MNMessagesNuxView> _messagesNuxView;

}

@property (nonatomic,retain) UIView*<MNMessagesNuxView> messagesNuxView;                     //@synthesize messagesNuxView=_messagesNuxView - In the implementation block
@property (assign,nonatomic) long long bottomToastContainerPosition;                         //@synthesize bottomToastContainerPosition=_bottomToastContainerPosition - In the implementation block
@property (assign,nonatomic) double bottomToastContainerYOffset;                             //@synthesize bottomToastContainerYOffset=_bottomToastContainerYOffset - In the implementation block
@property (nonatomic,retain) UIView * threadMontageView;                                     //@synthesize threadMontageView=_threadMontageView - In the implementation block
@property (nonatomic,retain) UIView * collectionFooterView;                                  //@synthesize collectionFooterView=_collectionFooterView - In the implementation block
@property (nonatomic,readonly) UIView * miniAppOverlayView; 
@property (nonatomic,readonly) BOOL showingFullScreenNullStateView;                          //@synthesize showingFullScreenNullStateView=_showingFullScreenNullStateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMessagesViewingDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNCollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) MNMessagesBottomBarView * bottomBarView;                        //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (nonatomic,retain) MNParticleSystemView * particleSystemView;                      //@synthesize particleSystemView=_particleSystemView - In the implementation block
@property (nonatomic,readonly) FBToastContainerView * topToastContainerView;                 //@synthesize topToastContainerView=_topToastContainerView - In the implementation block
@property (nonatomic,readonly) FBToastContainerView * bottomToastContainerView;              //@synthesize bottomToastContainerView=_bottomToastContainerView - In the implementation block
-(void)_didTap:(id)arg1 ;
-(CGRect)_topToastViewFrame;
-(void)_toastContainerViewWillChangeWithDuration:(double)arg1 ;
-(void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillResize:(id)arg1 withAnimationDuration:(double)arg2 ;
-(FBToastContainerView *)topToastContainerView;
-(void)setBottomBarView:(MNMessagesBottomBarView *)arg1 ;
-(void)pushScrollState;
-(void)popScrollState;
-(double)_keyboardTopY;
-(void)hideLoadingAnimated:(BOOL)arg1 ;
-(void)tearDownMiniAppView;
-(void)updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 options:(unsigned long long)arg3 ;
-(void)hideMessagesNuxView:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)threadMontageView;
-(void)setThreadMontageView:(UIView *)arg1 ;
-(MNMessagesBottomBarView *)bottomBarView;
-(void)updateBottomBarViewHeightWithDuration:(double)arg1 animationOptions:(unsigned long long)arg2 animationStyle:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(FBToastContainerView *)bottomToastContainerView;
-(double)heightForMessagesList;
-(BOOL)showingFullScreenNullStateView;
-(double)heightForMessagesListWithoutToast;
-(void)setBottomToastContainerPosition:(long long)arg1 ;
-(void)setBottomToastContainerYOffset:(double)arg1 ;
-(void)scrollMessageListToRowAtNearestEdgeAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollMessageListToRowAtIndexPath:(id)arg1 targetPosition:(long long)arg2 animation:(long long)arg3 ;
-(void)showLoadingAnimated:(BOOL)arg1 ;
-(void)showMessagesNuxView:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)maxAvailableSizeForNuxView;
-(void)showFullScreenNullStateView:(id)arg1 ;
-(void)hideFullScreenNullStateViewAnimated:(BOOL)arg1 ;
-(void)updateBottomBarViewHeightWithDuration:(double)arg1 animationOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCollectionFooterView:(UIView *)arg1 ;
-(void)addComposingView:(id)arg1 withBeginningAnimationConfig:(id)arg2 ;
-(void)scrollMessageListToBottomOfSection:(long long)arg1 withAnimation:(long long)arg2 ;
-(void)cancelComposingView:(id)arg1 ;
-(void)endComposingView:(id)arg1 withEndingAnimationConfig:(id)arg2 ;
-(void)removeComposingView:(id)arg1 ;
-(long long)currentScrollPosition;
-(MNParticleSystemView *)particleSystemView;
-(void)setParticleSystemView:(MNParticleSystemView *)arg1 ;
-(void)showMiniAppView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hideMiniAppViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMiniAppMessageListVerticalSpace:(double)arg1 animated:(BOOL)arg2 ;
-(void)setCollectionFooterViewIsHidden:(BOOL)arg1 withAnimationDuration:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_layoutMainContent;
-(void)mn_invalidateLayoutForView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_didDoubleTap:(id)arg1 ;
-(void)_resizeAllSubviews;
-(void)_layoutAllSubviews;
-(void)_updateViewOrder;
-(void)_resizeThreadMontageView;
-(void)_resizeCollectionView;
-(void)_resizeCollectionFooterView;
-(void)_resizeBottomBarView;
-(void)_layoutBottomBarView;
-(void)_layoutCollectionFooterView;
-(void)_layoutToastViews;
-(void)_layoutThreadMontageView;
-(void)_layoutMiniAppView;
-(void)_layoutParticleSystemView;
-(double)_keyboardNormalizedVisibleHeight;
-(void)_performWithScrollPositionRestoring:(/*^block*/id)arg1 ;
-(CGSize)_keyboardTopViewSize;
-(void)_layoutCollectionView;
-(void)_layoutMessagesNuxView;
-(void)_layoutFullScreenNullStateView;
-(double)_topContentToastInset;
-(void)_layoutTopToastView;
-(void)_layoutBottomToastView;
-(CGRect)_bottomToastViewFrame;
-(void)_setMessageListContentOffset:(CGPoint)arg1 withAnimation:(long long)arg2 ;
-(BOOL)_isIndexPathCloserToTop:(id)arg1 ;
-(void)_layoutView:(id)arg1 withHeight:(double)arg2 ;
-(double)_threadMontageViewHeight;
-(double)_visibleTopToastHeight;
-(BOOL)_isMiniAppShowing;
-(void)_triggerContextMenuWithLocationInCollectionView:(CGPoint)arg1 ;
-(void)_didTapCollectionView:(id)arg1 ;
-(void)_didTapNullStateView:(id)arg1 ;
-(void)userDidTapMessagesNuxView:(id)arg1 ;
-(void)scrollMessageListToRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)showActionSheet:(id)arg1 fromSourceView:(id)arg2 ;
-(void)prepareAlertController:(id)arg1 fromSourceView:(id)arg2 ;
-(UIView *)miniAppOverlayView;
-(long long)bottomToastContainerPosition;
-(double)bottomToastContainerYOffset;
-(UIView *)collectionFooterView;
-(UIView*<MNMessagesNuxView>)messagesNuxView;
-(void)setMessagesNuxView:(UIView*<MNMessagesNuxView>)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)mn_setBottomContentInset:(double)arg1 ;
-(void)_didLongPress:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMessagesViewingDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id<MNMessagesViewingDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(MNCollectionView *)collectionView;
-(void)_layoutLoadingView;
-(id)initWithCollectionView:(id)arg1 ;
@end

