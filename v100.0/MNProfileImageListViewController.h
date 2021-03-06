/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNProfileImageListViewControllerDelegate;
@class NSMutableArray, MNProfileImageViewController, MNThreadImageManager, NSArray, NSString;

@interface MNProfileImageListViewController : UICollectionViewController <FBClassProvidable> {

	NSMutableArray* _contacts;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	id<MNProfileImageListViewControllerDelegate> _delegate;
	NSArray* _ignoredContacts;

}

@property (assign,nonatomic,__weak) id<MNProfileImageListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                                                          //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * ignoredContacts;                                                   //@synthesize ignoredContacts=_ignoredContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_indexPathOfContactWithClientSideIdentifier:(id)arg1 ;
-(NSArray *)ignoredContacts;
-(void)setIgnoredContacts:(NSArray *)arg1 ;
-(void)setDelegate:(id<MNProfileImageListViewControllerDelegate>)arg1 ;
-(id<MNProfileImageListViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(NSArray *)contacts;
-(void)addContact:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)removeContact:(id)arg1 ;
@end

