/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class UIView;

@interface FBMStickerTrayCollectionView : UICollectionView {

	long long _stickerTrayCollectionViewType;
	UIView* _extraView;

}

@property (assign,nonatomic) long long stickerTrayCollectionViewType;              //@synthesize stickerTrayCollectionViewType=_stickerTrayCollectionViewType - In the implementation block
@property (nonatomic,retain) UIView * extraView;                                   //@synthesize extraView=_extraView - In the implementation block
-(void)setExtraView:(UIView *)arg1 ;
-(void)setStickerTrayCollectionViewType:(long long)arg1 ;
-(UIView *)extraView;
-(long long)stickerTrayCollectionViewType;
-(void)layoutSubviews;
@end
