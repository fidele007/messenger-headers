/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, NSMutableArray, FBListViewScrollManager, UICollectionView;

@interface MNComposerOverflowTabView : UIView {

	UIView* _topSeparatorView;
	NSMutableArray* _scrollStateStack;
	FBListViewScrollManager* _scrollManager;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)_pushScrollState;
-(void)_popScrollState;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

