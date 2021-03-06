/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIScrollView;

@interface FBScrollComponentDelegateActionWillEndDraggingData : NSObject {

	UIScrollView* _scrollView;
	CGPoint _velocity;
	CGPoint _targetContentOffset;

}

@property (nonatomic,retain) UIScrollView * scrollView;                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                         //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
-(void)setVelocity:(CGPoint)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(CGPoint)velocity;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
@end

