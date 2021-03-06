/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UITapGestureRecognizer, FBFeedView, UIView, FBFeedCameraViewListenerAnnouncer, NSString;

@interface FBFeedCameraView : UIView <UIScrollViewDelegate> {

	UIScrollView* _feedViewWrapper;
	UITapGestureRecognizer* _tapGestureRecognizer;
	FBFeedView* _feedView;
	UIView* _backgroundCameraView;
	FBFeedCameraViewListenerAnnouncer* _announcer;
	FBFeedViewStateInfo _stateInfo;
	double _cameraHeightToWidthRatio;
	BOOL _expanded;
	BOOL _viewFinderVisible;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_wrapOrUnwrapFeedView;
-(void)_recursivelyDisableScrollToTopInView:(id)arg1 ;
-(void)updateWithFeedViewState:(unsigned long long)arg1 ;
-(void)_animateCameraExpanded:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setFeedViewBackgroundColor:(id)arg1 ;
-(id)initWithFeedView:(id)arg1 backgroundColor:(id)arg2 cameraHeightToWidthRatio:(double)arg3 ;
-(void)setBackgroundCameraView:(id)arg1 ;
-(void)setFeedCameraViewFinderVisible:(BOOL)arg1 ;
-(void)expandCameraAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)collapseCameraAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)feedView;
-(void)setPullToRefreshViewSpinnerColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

