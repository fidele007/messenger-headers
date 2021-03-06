/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/MNMessagesCollectionViewDelegate.h>

@protocol MNAvatarImageDecorating, MNExtensionMessagesViewControllerConfigurationListening, MNExtensionMessagesViewControllerAppearanceListening, MNExtensionMessagesViewControllerDelegate;
@class MNExtensionMessagesView, MNExtensionThreadViewModel, MNExtensionMessageCellLayout, MNProfileImageViewController, MNExtensionMessageCellRegistrar, NSString;

@interface MNExtensionMessagesViewController : UIViewController <UICollectionViewDataSource, MNMessagesCollectionViewDelegate> {

	MNExtensionMessagesView* _messagesView;
	MNExtensionThreadViewModel* _viewModel;
	MNExtensionMessageCellLayout* _extensionMessageCellLayout;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNExtensionMessageCellRegistrar* _extensionMessageCellRegistrar;
	id<MNExtensionMessagesViewControllerConfigurationListening> _configurationListener;
	id<MNExtensionMessagesViewControllerAppearanceListening> _appearanceListener;
	id<MNExtensionMessagesViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) CGSize contentSizeOfCollectionView; 
@property (assign,nonatomic,__weak) id<MNExtensionMessagesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExtensionMessageCellLayout:(id)arg1 profileImageViewController:(id)arg2 avatarImageDecoration:(id)arg3 extensionMessageCellRegistrar:(id)arg4 configurationListener:(id)arg5 appearanceListener:(id)arg6 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 layoutElementsForItemAtIndexPath:(id)arg3 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearanceTransitioningForElementWithCategory:(unsigned long long)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearingTransformerForElementWithCategory:(unsigned long long)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 disappearingTransformerForElementWithCategory:(unsigned long long)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(void)_reloadViewModelBecauseOfViewSizeChanges;
-(void)longOperationBegan;
-(CGSize)contentSizeOfCollectionView;
-(void)setDelegate:(id<MNExtensionMessagesViewControllerDelegate>)arg1 ;
-(id<MNExtensionMessagesViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

