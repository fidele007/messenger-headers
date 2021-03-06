/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPollTypeCalendarViewDelegate;
@class MNButton, UIView, UICollectionView;

@interface MNPollTypeCalendarView : UIView {

	MNButton* _addTimeButton;
	UIView* _background;
	UIView* _addTimeButtonBorder;
	UICollectionView* _collectionView;
	id<MNPollTypeCalendarViewDelegate> _delegate;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<MNPollTypeCalendarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapAddTimeButton;
-(void)_hideAddTimeButton;
-(void)_showAddTimeButton;
-(void)updateSelectedDates:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNPollTypeCalendarViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPollTypeCalendarViewDelegate>)delegate;
-(UICollectionView *)collectionView;
@end

