/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, FBLazyCreator, PHAsset;

@interface MNMontageMediaPickerCell : UICollectionViewCell {

	UIImageView* _imageView;
	FBLazyCreator* _durationLabelCreator;
	FBLazyCreator* _loadingOverlayViewCreator;
	FBLazyCreator* _loadingIndicatorCreator;
	FBLazyCreator* _checkmarkButtonCreator;
	BOOL _isPreparingForReuse;
	BOOL _loading;
	PHAsset* _asset;
	long long _selectionStyle;

}

@property (nonatomic,copy) PHAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL loading;                          //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) long long selectionStyle;              //@synthesize selectionStyle=_selectionStyle - In the implementation block
-(void)_updateSubviewOrders;
-(void)_updateCheckmarkAnimated:(BOOL)arg1 ;
-(void)_updateSelectionViewIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end
