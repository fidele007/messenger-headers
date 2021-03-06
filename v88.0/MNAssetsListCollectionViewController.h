/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@protocol MNPhotosDataRequesting;
@class MNMediaPickerAccessibilityLabelGenerator, FBContentInsetTracker, NSArray;

@interface MNAssetsListCollectionViewController : UICollectionViewController {

	id<MNPhotosDataRequesting> _photosDataRequester;
	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	FBContentInsetTracker* _contentInsetTracker;
	NSArray* _selectedAssets;

}

@property (nonatomic,copy) NSArray * selectedAssets;              //@synthesize selectedAssets=_selectedAssets - In the implementation block
-(id)initWithPhotosDataRequester:(id)arg1 mediaPickerAccessibilityLabelGenerator:(id)arg2 ;
-(void)_collectionView:(id)arg1 removeItemAtIndexPath:(id)arg2 ;
-(void)appendAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)removeAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)updateSelectedAssets:(id)arg1 ;
-(void)setSelectedAssets:(NSArray *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(NSArray *)selectedAssets;
@end

