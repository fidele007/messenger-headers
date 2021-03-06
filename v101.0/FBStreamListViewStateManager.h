/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>

@protocol FBLoadingView, FBStreamListViewLoadingViewUpdateListener, FBStreamListViewStateManagerDelegate;
@class FBPullToRefreshView, UIView, FBTransientViewStateManager, FBFeedBannerPresenter, FBFeedNetworkErrorBanner, FBFeedBannerContainerView, FBReachabilityAnnouncer, NSString, UIImage;

@interface FBStreamListViewStateManager : NSObject <FBReachabilityListener> {

	FBPullToRefreshView* _pullToRefreshView;
	UIView*<FBLoadingView> _loadingView;
	FBTransientViewStateManager* _viewStateManager;
	FBFeedBannerPresenter* _bannerPresenter;
	FBFeedNetworkErrorBanner* _networkErrorBanner;
	FBFeedBannerContainerView* _bannerContainer;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
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
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setImageForEmptyView:(UIImage *)arg1 ;
-(void)addInitialLoadingViewUpdateListener:(id)arg1 ;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 loadingView:(id)arg3 ;
-(void)hideLoadingViewForState:(unsigned long long)arg1 ;
-(void)removeReachabilityObserver;
-(void)_showBannerWithTitle:(id)arg1 ;
-(void)_retryButtonPressed;
-(void)addReachabilityObserver;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(void)setButtonTextForEmpty:(NSString *)arg1 ;
-(void)_sizeBanner;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 ;
-(void)updateLayoutWithContentWidth:(double)arg1 ;
-(void)updatePullToRefreshView:(id)arg1 ;
-(UIView *)emptyStateView;
-(void)setEmptyStateView:(UIView *)arg1 ;
-(NSString *)emptyStateText;
-(void)setEmptyStateText:(NSString *)arg1 ;
-(void)setDelegate:(id<FBStreamListViewStateManagerDelegate>)arg1 ;
-(id<FBStreamListViewStateManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_hideBanner;
@end

