/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
