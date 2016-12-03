/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNDefaultAttachmentCellElementController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol MNBubbleDisplayConfiguring, MNMessageCellElementControllerActionHandler, MNMessageCellElementControllerDelegate;
@class NSMutableDictionary, MNAttachmentStyleRendererManager, MNAttachmentViewCachedFactory, NSString;

@interface MNHScrollAttachmentCellElementController : MNDefaultAttachmentCellElementController <UICollectionViewDataSource> {

	NSMutableDictionary* _subattachmentViewLifecycleControllersByIndex;
	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	MNAttachmentViewCachedFactory* _attachmentViewCachedFactory;
	id<MNBubbleDisplayConfiguring> _bubbleDisplayConfigurer;
	id<MNMessageCellElementControllerActionHandler> _actionHandler;
	id<MNMessageCellElementControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageCellElementControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)_updateActiveSubattachmentLifecycleControllersWithViewModel:(id)arg1 threadKey:(id)arg2 ;
-(void)_cleanupAllSubattachmentLifecycleControllers;
-(void)_updateSubattachmentLifecycleController:(id)arg1 withViewModel:(id)arg2 threadKey:(id)arg3 forIndex:(long long)arg4 ;
-(void)_cleanupSubattachmentLifecycleControllerForIndex:(long long)arg1 ;
-(id)initWithAttachmentStyleRendererManager:(id)arg1 attachmentViewCachedFactory:(id)arg2 bubbleDisplayConfigurer:(id)arg3 ;
-(id)_createSubattachmentLifecycleControllerAtIndexIfNeeded:(long long)arg1 ;
-(MNBubbleViewAttributes)_overlayAttributesForCellAtIndex:(long long)arg1 ;
-(void)setDelegate:(id<MNMessageCellElementControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMessageCellElementControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
@end

