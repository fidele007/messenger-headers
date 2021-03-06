/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBReachabilityListener.h>

@protocol FBLoadingView, FBStreamListViewLoadingViewUpdateListener, FBStreamListViewStateManagerDelegate;
@class FBPullToRefreshView, UIView, FBTransientViewStateManager, FBFeedBannerPresenter, FBFeedNetworkErrorBanner, FBFeedBannerContainerView, NSString, UIImage;

@interface FBStreamListViewStateManager : NSObject <FBReachabilityListener> {

	FBPullToRefreshView* _pullToRefreshView;
	UIView*<FBLoadingView> _loadingView;
	FBTransientViewStateManager* _viewStateManager;
	FBFeedBannerPresenter* _bannerPresenter;
	FBFeedNetworkErrorBanner* _networkErrorBanner;
	FBFeedBannerContainerView* _bannerContainer;
	BOOL _animating;
	id<FBStreamListViewLoadingViewUpdateListener> _loadingViewUpdateListener;
	id<FBStreamListViewStateManagerDelegate> _delegate;
	long long _state;

}

@property (assign,nonatomic,__weak) id<FBStreamListViewStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * emptyStateView; 
@property (nonatomic,copy) NSString * emptyStateText; 
@property (nonatomic,retain) UIImage * imageForEmptyView; 
@property (nonatomic,copy) NSString * buttonTextForEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageForEmptyView:(UIImage *)arg1 ;
-(void)addInitialLoadingViewUpdateListener:(id)arg1 ;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 loadingView:(id)arg3 ;
-(void)setEmptyStateText:(NSString *)arg1 ;
-(void)setEmptyStateView:(UIView *)arg1 ;
-(void)updatePullToRefreshView:(id)arg1 ;
-(void)updateLayoutWithContentWidth:(double)arg1 ;
-(void)hideLoadingViewForState:(unsigned long long)arg1 ;
-(void)removeReachabilityObserver;
-(void)_showBannerWithTitle:(id)arg1 ;
-(void)_retryButtonPressed;
-(void)addReachabilityObserver;
-(void)setButtonTextForEmpty:(NSString *)arg1 ;
-(void)_sizeBanner;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 ;
-(UIView *)emptyStateView;
-(NSString *)emptyStateText;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(void)setDelegate:(id<FBStreamListViewStateManagerDelegate>)arg1 ;
-(id<FBStreamListViewStateManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_hideBanner;
@end

