/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNLoadingView, MNPhotoEditingTabContainerView;

@interface MNPhotoEditingView : UIView {

	CGRect _keyboardFrame;
	double _mediaAspectRatio;
	UIView* _editingControlsView;
	MNLoadingView* _loadingView;
	UIView* _loadingTransparentView;
	BOOL _isLoading;
	MNPhotoEditingTabContainerView* _tabBarContainerView;
	UIView* _mediaView;

}

@property (nonatomic,readonly) MNPhotoEditingTabContainerView * tabBarContainerView;              //@synthesize tabBarContainerView=_tabBarContainerView - In the implementation block
@property (nonatomic,readonly) UIView * mediaView;                                                //@synthesize mediaView=_mediaView - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                                      //@synthesize isLoading=_isLoading - In the implementation block
-(void)updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 options:(unsigned long long)arg3 ;
-(void)_layoutEditingControlsView;
-(void)addEditingControlsView:(id)arg1 ;
-(void)_resizeTabBarContainerView;
-(void)_layoutTabBarContainerView;
-(void)_layoutMediaView;
-(void)_layoutPhotoEditingFeatures;
-(id)initWithMediaView:(id)arg1 tabBarContainerView:(id)arg2 mediaAspectRatio:(double)arg3 ;
-(void)setTabBarContainerView:(MNPhotoEditingTabContainerView *)arg1 ;
-(MNPhotoEditingTabContainerView *)tabBarContainerView;
-(void)layoutSubviews;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(UIView *)mediaView;
@end

