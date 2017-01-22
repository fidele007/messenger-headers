/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBBrowserRelatedStoryTileViewDelegate.h>

@protocol FBBrowserRelatedStoriesViewDelegate;
@class UIImageView, UIButton, UILabel, UIView, NSArray, UIScrollView, UIPageControl, NSString;

@interface FBBrowserRelatedStoriesView : UIView <UIScrollViewDelegate, FBBrowserRelatedStoryTileViewDelegate> {

	UIImageView* _appIconImageView;
	UIButton* _toggleMinimizeFooterButton;
	UILabel* _relatedStoriesTextLabel;
	UIView* _headerView;
	UIView* _belowHeaderThinLineView;
	UIView* _aboveHeaderThinLineView;
	NSArray* _tiles;
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	UIView* _paginatedScrollView;
	id<FBBrowserRelatedStoriesViewDelegate> _relatedStoriesViewDelegate;
	BOOL _isMinimized;

}

@property (nonatomic,readonly) BOOL isMinimized;                    //@synthesize isMinimized=_isMinimized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_toggleMinimizeButtonTapped:(id)arg1 ;
-(id)initWithRelatedStories:(id)arg1 relatedStoriesViewDelegate:(id)arg2 session:(id)arg3 ;
-(void)relatedStoryTapped:(id)arg1 sender:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isMinimized;
@end
