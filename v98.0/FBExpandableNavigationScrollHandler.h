/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class FBExpandableNavigationBar, UIScrollView, NSString;

@interface FBExpandableNavigationScrollHandler : NSObject <UIScrollViewDelegate> {

	FBExpandableNavigationBar* _navigationBar;
	double _prevScrollPosition;
	double _expansionVelocityThreshold;
	BOOL _expandAfterScrollingDown;
	BOOL _ignoreScrollEvents;
	/*^block*/id _updateBlock;
	BOOL _navigationBarExpansionDisabled;
	double _navigationBarHeight;
	long long _expansionState;
	UIScrollView* _currentlyTrackedScrollView;

}

@property (assign,nonatomic) double navigationBarHeight;                                                               //@synthesize navigationBarHeight=_navigationBarHeight - In the implementation block
@property (assign,nonatomic) long long expansionState;                                                                 //@synthesize expansionState=_expansionState - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * currentlyTrackedScrollView;                                         //@synthesize currentlyTrackedScrollView=_currentlyTrackedScrollView - In the implementation block
@property (nonatomic,readonly) BOOL atTop; 
@property (nonatomic,readonly) BOOL atBottom; 
@property (nonatomic,readonly) FBExpandableNavigationBar * navigationBar;                                              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,getter=navigationBarExpansionIsDisabled,nonatomic) BOOL navigationBarExpansionDisabled;              //@synthesize navigationBarExpansionDisabled=_navigationBarExpansionDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_FB40)expansionAnimationConfiguration;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)expansionState;
-(void)setExpansionState:(long long)arg1 ;
-(id)initWithNavigationBar:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)setNavigationBarExpansionDisabled:(BOOL)arg1 ;
-(void)_setNavigationBarExpanded:(BOOL)arg1 animationConfig:(SCD_Struct_FB40)arg2 ;
-(void)setCurrentlyTrackedScrollView:(UIScrollView *)arg1 ;
-(BOOL)atBottom;
-(BOOL)atTop;
-(void)_scrollScrollView:(id)arg1 byAmount:(double)arg2 withInitialVelocity:(CGPoint)arg3 ;
-(BOOL)navigationBarExpansionIsDisabled;
-(UIScrollView *)currentlyTrackedScrollView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(FBExpandableNavigationBar *)navigationBar;
-(double)navigationBarHeight;
-(void)setNavigationBarHeight:(double)arg1 ;
@end

