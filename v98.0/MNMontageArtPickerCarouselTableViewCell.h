/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMontageArtPickerBaseTableViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMontageArtPickerCarouselTableViewCellDelegate;
@class UICollectionView, MNMontageArtPickerSectionModel, MNMontageArtPickerSectionViewState, NSString;

@interface MNMontageArtPickerCarouselTableViewCell : MNMontageArtPickerBaseTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, FBClassProvidable> {

	UICollectionView* _collectionView;
	id<FBProvider> _artPickerStickerCellProvider;
	id<FBProvider> _artPickerCompositionCellProvider;
	id<FBProvider> _artPickerFilterDescriptorCellProvider;
	BOOL _cameraFiltersEnabled;
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
-(void)setCameraFiltersEnabled:(BOOL)arg1 ;
-(void)setupWithModel:(id)arg1 viewState:(id)arg2 ;
-(id)initWithArtPickerStickerCellProvider:(id)arg1 artPickerCompositionCellProvider:(id)arg2 artPickerFilterDescriptorCellProvider:(id)arg3 ;
-(id)_sectionUnitAtIndex:(long long)arg1 ;
-(BOOL)_shouldFetchMoreAtItem:(long long)arg1 ;
-(BOOL)_isSectionUnitAtIndexACameraFilter:(long long)arg1 ;
-(BOOL)_canFetchMore;
-(void)updateSelectedArtItem:(id)arg1 ;
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
