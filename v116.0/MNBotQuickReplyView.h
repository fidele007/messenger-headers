/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Messenger/MNQuickReplyCellDelegate.h>

@class FBUserSession, NSArray, NSString;

@interface MNBotQuickReplyView : UIScrollView <MNQuickReplyCellDelegate> {

	FBUserSession* _session;
	unsigned long long _maxNumberOfCells;
	long long _bubbleAlignment;
	NSArray* _quickReplyCells;
	double _layoutYOffset;

}

@property (nonatomic,copy,readonly) NSArray * quickReplyCells;                             //@synthesize quickReplyCells=_quickReplyCells - In the implementation block
@property (assign) double layoutYOffset;                                                   //@synthesize layoutYOffset=_layoutYOffset - In the implementation block
@property (assign,nonatomic,__weak) id<MNBotQuickReplyViewDelegate> delegate; 
@property (assign,nonatomic) long long bubbleAlignment;                                    //@synthesize bubbleAlignment=_bubbleAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutYOffset:(double)arg1 ;
-(unsigned long long)numberOfQuickReplies;
-(NSArray *)quickReplyCells;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 maxNumberOfCells:(unsigned long long)arg3 ;
-(void)_initializeQuickReplyCellArrayIfNeeded;
-(CGSize)_sizeForCellAtIndex:(int)arg1 ;
-(double)layoutYOffset;
-(void)didSelectQuickReplyCell:(id)arg1 ;
-(void)didLongPressQuickReplyCell:(id)arg1 ;
-(BOOL)shouldEnableLongPress:(id)arg1 ;
-(void)setBubbleAlignment:(long long)arg1 ;
-(long long)bubbleAlignment;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

