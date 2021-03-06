/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMontageArtPickerBaseTableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMontageArtPickerCarouselTableViewCellDelegate;
@class UICollectionView, MNCollectionViewUpdater, MNMontageArtPickerSectionModel, MNMontageArtPickerSectionViewState, NSString;

@interface MNMontageArtPickerCarouselTableViewCell : MNMontageArtPickerBaseTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, FBClassProvidable> {

	UICollectionView* _collectionView;
	id<FBProvider> _artPickerStickerCellProvider;
	id<FBProvider> _artPickerCompositionCellProvider;
	MNCollectionViewUpdater* _collectionViewUpdater;
	id<MNMontageArtPickerCarouselTableViewCellDelegate> _delegate;
	MNMontageArtPickerSectionModel* _model;
	MNMontageArtPickerSectionViewState* _viewState;

}

@property (nonatomic,retain) MNMontageArtPickerSectionModel * model;                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) MNMontageArtPickerSectionViewState * viewState;                                   //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageArtPickerCarouselTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_setupCollectionView;
-(void)setupWithModel:(id)arg1 viewState:(id)arg2 ;
-(id)initWithArtPickerStickerCellProvider:(id)arg1 artPickerCompositionCellProvider:(id)arg2 ;
-(id)_sectionUnitAtIndex:(long long)arg1 ;
-(BOOL)_shouldFetchMoreAtItem:(long long)arg1 ;
-(BOOL)_canFetchMore;
-(void)updateSelectedComposition:(id)arg1 ;
-(void)setViewState:(MNMontageArtPickerSectionViewState *)arg1 ;
-(void)setDelegate:(id<MNMontageArtPickerCarouselTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMontageArtPickerCarouselTableViewCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)prepareForReuse;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(MNMontageArtPickerSectionModel *)model;
-(void)setModel:(MNMontageArtPickerSectionModel *)arg1 ;
-(MNMontageArtPickerSectionViewState *)viewState;
-(void)updateModel:(id)arg1 ;
@end

