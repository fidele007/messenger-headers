/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@class MNDragPillView, UIView;

@interface MNBotMenuContainerScrollView : UIScrollView {

	MNDragPillView* _dragPillView;
	UIView* _containerView;
	UIView* _scrollContentView;

}

@property (nonatomic,retain) UIView * scrollContentView;              //@synthesize scrollContentView=_scrollContentView - In the implementation block
-(void)setScrollContentView:(UIView *)arg1 ;
-(UIView *)scrollContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
@end

