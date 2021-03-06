/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/FBExpandableView.h>

@protocol FBExpandableButtonContents;
@class NSString;

@interface FBExpandableButton : UIControl <FBExpandableView> {

	id<FBExpandableButtonContents> _contents;
	UIEdgeInsets _collapsedHitTestSlop;
	UIEdgeInsets _expandedHitTestSlop;
	double _expansionProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double expansionProgress;              //@synthesize expansionProgress=_expansionProgress - In the implementation block
+(id)buttonWithType:(unsigned long long)arg1 options:(id)arg2 ;
-(void)setExpansionProgress:(double)arg1 ;
-(double)expansionProgress;
-(CGRect)_transitionFrameWithExpansionProgress:(double)arg1 bounds:(CGRect)arg2 ;
-(void)_updatePositionsWithTransitionFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithContents:(id)arg1 ;
@end

