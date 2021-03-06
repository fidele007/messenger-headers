/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSString, UIView, FBListViewControllerAnalyticsConfiguration, NSArray, FBScenePathContext;


@protocol FBListViewControllerConfiguring <NSObject>
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,copy) NSString * dataIdentifier; 
@property (assign,nonatomic) BOOL hasPullToRefresh; 
@property (assign,nonatomic) BOOL hasInitialLoadingView; 
@property (nonatomic,retain) UIView*<FBLoadingView> initialLoadingView; 
@property (assign,nonatomic) BOOL hasViewStateManager; 
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager; 
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator; 
@property (assign,nonatomic) BOOL hasNavBar; 
@property (assign,nonatomic) BOOL hasBackArrowInNavBar; 
@property (assign,nonatomic) BOOL hideSearchInNavBar; 
@property (assign,nonatomic) BOOL hasChatBarButtonInNavBar; 
@property (assign,nonatomic) BOOL hideNavBarRightButton; 
@property (assign,nonatomic) BOOL hasTabBar; 
@property (assign,nonatomic) long long cardedContentLayout; 
@property (assign,nonatomic) BOOL statusBarScrollToTopEnabled; 
@property (nonatomic,copy) NSString * noContentTextString; 
@property (nonatomic,retain) UIView * noContentView; 
@property (nonatomic,copy) NSString * viewControllerTitle; 
@property (assign,nonatomic) double bottomScrollBuffer; 
@property (assign,nonatomic) double topScrollBuffer; 
@property (assign,nonatomic) BOOL shouldCancelTouchesWhenScrolling; 
@property (assign,nonatomic) unsigned long long dataSourceUpdatesCountToEnableScrollPositionRestoring; 
@property (nonatomic,retain) FBListViewControllerAnalyticsConfiguration * analyticsConfiguration; 
@property (assign,nonatomic) double contentWidth; 
@property (nonatomic,copy) NSArray * fetchStatusListeners; 
@property (assign,nonatomic) BOOL shouldCombineChangesets; 
@property (nonatomic,copy) id workingRangeControllerPauseCompletionBlock; 
@property (nonatomic,retain) FBScenePathContext * scenePathContext; 
@property (assign,nonatomic) BOOL shouldSupportOrientationChanges; 
@property (assign,nonatomic) BOOL shouldShowCancelButton; 
@property (assign,nonatomic) BOOL alwaysBounceVertical; 
@property (assign,nonatomic) BOOL showsHorizontalScrollIndicator; 
@property (assign,nonatomic) BOOL generateComponentsInBackground; 
@required
-(BOOL)hasPullToRefresh;
-(void)setHasPullToRefresh:(BOOL)arg1;
-(BOOL)hasInitialLoadingView;
-(void)setHasInitialLoadingView:(BOOL)arg1;
-(UIView*<FBLoadingView>)initialLoadingView;
-(void)setInitialLoadingView:(id)arg1;
-(BOOL)hasViewStateManager;
-(void)setHasViewStateManager:(BOOL)arg1;
-(BOOL)shouldTransitionViewStateManager;
-(void)setShouldTransitionViewStateManager:(BOOL)arg1;
-(BOOL)hasNavBar;
-(void)setHasNavBar:(BOOL)arg1;
-(BOOL)hasBackArrowInNavBar;
-(void)setHasBackArrowInNavBar:(BOOL)arg1;
-(BOOL)hideSearchInNavBar;
-(void)setHideSearchInNavBar:(BOOL)arg1;
-(BOOL)hasChatBarButtonInNavBar;
-(void)setHasChatBarButtonInNavBar:(BOOL)arg1;
-(BOOL)hideNavBarRightButton;
-(void)setHideNavBarRightButton:(BOOL)arg1;
-(BOOL)hasTabBar;
-(void)setHasTabBar:(BOOL)arg1;
-(long long)cardedContentLayout;
-(void)setCardedContentLayout:(long long)arg1;
-(BOOL)statusBarScrollToTopEnabled;
-(void)setStatusBarScrollToTopEnabled:(BOOL)arg1;
-(NSString *)noContentTextString;
-(void)setNoContentTextString:(id)arg1;
-(NSString *)viewControllerTitle;
-(void)setViewControllerTitle:(id)arg1;
-(double)bottomScrollBuffer;
-(void)setBottomScrollBuffer:(double)arg1;
-(double)topScrollBuffer;
-(void)setTopScrollBuffer:(double)arg1;
-(BOOL)shouldCancelTouchesWhenScrolling;
-(void)setShouldCancelTouchesWhenScrolling:(BOOL)arg1;
-(unsigned long long)dataSourceUpdatesCountToEnableScrollPositionRestoring;
-(void)setDataSourceUpdatesCountToEnableScrollPositionRestoring:(unsigned long long)arg1;
-(FBListViewControllerAnalyticsConfiguration *)analyticsConfiguration;
-(void)setAnalyticsConfiguration:(id)arg1;
-(NSArray *)fetchStatusListeners;
-(void)setFetchStatusListeners:(id)arg1;
-(BOOL)shouldCombineChangesets;
-(void)setShouldCombineChangesets:(BOOL)arg1;
-(id)workingRangeControllerPauseCompletionBlock;
-(void)setWorkingRangeControllerPauseCompletionBlock:(/*^block*/id)arg1;
-(FBScenePathContext *)scenePathContext;
-(void)setScenePathContext:(id)arg1;
-(BOOL)shouldSupportOrientationChanges;
-(void)setShouldSupportOrientationChanges:(BOOL)arg1;
-(BOOL)generateComponentsInBackground;
-(void)setGenerateComponentsInBackground:(BOOL)arg1;
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
-(BOOL)alwaysBounceVertical;
-(void)setAlwaysBounceVertical:(BOOL)arg1;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(void)setNoContentView:(id)arg1;
-(UIView *)noContentView;
-(double)contentWidth;
-(NSString *)dataIdentifier;
-(void)setDataIdentifier:(id)arg1;
-(void)setContentWidth:(double)arg1;
-(BOOL)shouldShowCancelButton;
-(void)setShouldShowCancelButton:(BOOL)arg1;

@end

