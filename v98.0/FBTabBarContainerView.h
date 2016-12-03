/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _FBTabBarContainerView;

@interface FBTabBarContainerView : UIView {

	UIView* _navigationBar;
	UIView* _contentView;
	UIView* _minimizedTabBarView;
	BOOL _minimizedTabBarViewHasBeenLayouted;
	_FBTabBarContainerView* _tabBarContainerView;
	double _tabBarViewOffsetFraction;
	double _tabBarWidth;
	BOOL _alwaysExpandLeftTabBar;
	unsigned long long _tabBarPosition;
	unsigned long long _tabBarIconSize;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (assign,nonatomic) unsigned long long tabBarPosition;              //@synthesize tabBarPosition=_tabBarPosition - In the implementation block
@property (assign,nonatomic) unsigned long long tabBarIconSize;              //@synthesize tabBarIconSize=_tabBarIconSize - In the implementation block
@property (assign,nonatomic) BOOL alwaysExpandLeftTabBar;                    //@synthesize alwaysExpandLeftTabBar=_alwaysExpandLeftTabBar - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                    //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                 //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)setTabBarView:(id)arg1 ;
-(double)_tabBarViewSize;
-(BOOL)_tabBarStatusChangedFromBarWidth:(double)arg1 toBarWidth:(double)arg2 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 animated:(BOOL)arg2 ;
-(void)setAlwaysExpandLeftTabBar:(BOOL)arg1 ;
-(void)setMinimizedTabBarView:(id)arg1 ;
-(void)setTabBarViewPosition:(unsigned long long)arg1 ;
-(double)tabBarViewOffsetFraction;
-(void)setTabBarViewOffsetFraction:(double)arg1 ;
-(unsigned long long)tabBarPosition;
-(void)setTabBarPosition:(unsigned long long)arg1 ;
-(unsigned long long)tabBarIconSize;
-(void)setTabBarIconSize:(unsigned long long)arg1 ;
-(BOOL)alwaysExpandLeftTabBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentView:(id)arg1 ;
-(void)setNavigationBar:(id)arg1 ;
@end
