/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSIndexSet, RCTRefreshControl, NSString;

@interface RCTCustomScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	UIView* _dockedHeaderView;
	BOOL _centerContent;
	NSIndexSet* _stickyHeaderIndices;
	RCTRefreshControl* _rctRefreshControl;

}

@property (nonatomic,copy) NSIndexSet * stickyHeaderIndices;                     //@synthesize stickyHeaderIndices=_stickyHeaderIndices - In the implementation block
@property (assign,nonatomic) BOOL centerContent;                                 //@synthesize centerContent=_centerContent - In the implementation block
@property (nonatomic,retain) RCTRefreshControl * rctRefreshControl;              //@synthesize rctRefreshControl=_rctRefreshControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCustomPan:(id)arg1 ;
-(BOOL)_shouldDisableScrollInteraction;
-(void)dockClosestSectionHeader;
-(void)setRctRefreshControl:(RCTRefreshControl *)arg1 ;
-(NSIndexSet *)stickyHeaderIndices;
-(void)setStickyHeaderIndices:(NSIndexSet *)arg1 ;
-(BOOL)centerContent;
-(void)setCenterContent:(BOOL)arg1 ;
-(RCTRefreshControl *)rctRefreshControl;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)contentView;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
@end

