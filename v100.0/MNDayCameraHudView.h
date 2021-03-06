/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPassThroughView.h>

@class UIView;

@interface MNDayCameraHudView : MNPassThroughView {

	UIView* _fixedHudContainerView;
	UIView* _floatingHudContainerView;
	double _floatingHudContainerViewBottomMargin;

}

@property (nonatomic,readonly) UIView * fixedHudContainerView;                         //@synthesize fixedHudContainerView=_fixedHudContainerView - In the implementation block
@property (nonatomic,readonly) UIView * floatingHudContainerView;                      //@synthesize floatingHudContainerView=_floatingHudContainerView - In the implementation block
@property (assign,nonatomic) double floatingHudContainerViewBottomMargin;              //@synthesize floatingHudContainerViewBottomMargin=_floatingHudContainerViewBottomMargin - In the implementation block
-(void)_addHudView:(id)arg1 toContainerView:(id)arg2 ;
-(void)addFixedHudView:(id)arg1 canHide:(BOOL)arg2 ;
-(void)addFloatingHudView:(id)arg1 ;
-(void)removeHudView:(id)arg1 ;
-(void)setFloatingHudContainerViewBottomMargin:(double)arg1 ;
-(UIView *)fixedHudContainerView;
-(UIView *)floatingHudContainerView;
-(double)floatingHudContainerViewBottomMargin;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

