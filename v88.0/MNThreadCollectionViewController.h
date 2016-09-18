/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNThreadCollectionProfileImageViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAvatarImageDecorating, MNCollectionViewPreviewingHandling, MNThreadCollectionViewControllerDelegate;
@class UICollectionView, MNProfileImageViewController, UIView, MNCollectionViewUpdater, MNThreadCollectionViewModel, NSString;

@interface MNThreadCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MNThreadCollectionProfileImageViewDelegate, FBClassProvidable> {

	UICollectionView* _collectionView;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecorator;
	UIView* _backgroundView;
	id<MNCollectionViewPreviewingHandling> _collectionViewPreviewingHandler;
	MNCollectionViewUpdater* _collectionViewUpdater;
	BOOL _performingBatchUpdate;
	id<MNThreadCollectionViewControllerDelegate> _delegate;
	MNThreadCollectionViewModel* _viewModel;

}

@property (assign,nonatomic) BOOL performingBatchUpdate;                                                //@synthesize performingBatchUpdate=_performingBatchUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNThreadCollectionViewModel * viewModel;                                     //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForViewModel:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_registerForPreviewing;
-(void)setPerformingBatchUpdate:(BOOL)arg1 ;
-(void)threadCollectionViewControllerWillAppear;
-(void)threadCollectionViewControllerDidDisappear;
-(void)scrollToBeginningAnimated:(BOOL)arg1 ;
-(BOOL)performingBatchUpdate;
-(void)_configureView:(id)arg1 withViewModel:(id)arg2 ;
-(void)_initCollectionViewIfNecessary;
-(void)_updateCellAtOriginalIndexPath:(id)arg1 finalIndexPath:(id)arg2 ;
-(id)initWithProfileImageViewController:(id)arg1 avatarImageDecorator:(id)arg2 collectionViewPreviewingHandler:(id)arg3 ;
-(void)profileImageViewDidHide:(id)arg1 ;
-(void)profileImageViewDidHideAll:(id)arg1 ;
-(void)viewDidDisppear:(BOOL)arg1 ;
-(id)_actorForUserId:(id)arg1 ;
-(void)setDelegate:(id<MNThreadCollectionViewControllerDelegate>)arg1 ;
-(id<MNThreadCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(MNThreadCollectionViewModel *)viewModel;
-(void)setViewModel:(MNThreadCollectionViewModel *)arg1 ;
@end
