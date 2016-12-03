/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCollectionView;

@interface MNCollectionViewPlaygroundView : UIView {

	MNCollectionView* _collectionView;
	double _topContentInset;

}

@property (nonatomic,readonly) MNCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) double topContentInset;                           //@synthesize topContentInset=_topContentInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNCollectionView *)collectionView;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
@end

