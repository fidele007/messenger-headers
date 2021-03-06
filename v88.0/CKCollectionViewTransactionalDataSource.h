/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/CKTransactionalComponentDataSourceListener.h>

@protocol CKSupplementaryViewDataSource;
@class CKTransactionalComponentDataSource, CKTransactionalComponentDataSourceState, CKComponentDataSourceAttachController, UICollectionView, NSString;

@interface CKCollectionViewTransactionalDataSource : NSObject <UICollectionViewDataSource, CKTransactionalComponentDataSourceListener> {

	CKTransactionalComponentDataSource* _componentDataSource;
	id<CKSupplementaryViewDataSource> _supplementaryViewDataSource;
	CKTransactionalComponentDataSourceState* _currentState;
	CKComponentDataSourceAttachController* _attachController;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) id<CKSupplementaryViewDataSource> supplementaryViewDataSource;              //@synthesize supplementaryViewDataSource=_supplementaryViewDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(void)transactionalComponentDataSource:(id)arg1 didModifyPreviousState:(id)arg2 byApplyingChanges:(id)arg3 ;
-(void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)arg1 inState:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 supplementaryViewDataSource:(id)arg2 configuration:(id)arg3 ;
-(id)modelForItemAtIndexPath:(id)arg1 ;
-(id<CKSupplementaryViewDataSource>)supplementaryViewDataSource;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
@end

