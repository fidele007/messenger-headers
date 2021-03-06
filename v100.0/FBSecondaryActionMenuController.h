/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverControllerDelegate.h>

@protocol FBNavigationCoordinator, FBSecondaryActionMenuControllerListener;
@class FBPopoverActionSheet, NSArray, FBFeedSecondaryActionMenuPartition, FBActionSheetButtonItem, UIViewController, NSString;

@interface FBSecondaryActionMenuController : NSObject <FBPopoverControllerDelegate> {

	FBPopoverActionSheet* _popoverActionSheet;
	unsigned long long _style;
	NSArray* _firstLevelButtonItems;
	NSArray* _secondLevelButtonItems;
	FBFeedSecondaryActionMenuPartition* _partition;
	FBActionSheetButtonItem* _moreButtonItem;
	FBActionSheetButtonItem* _backButtonItem;
	BOOL _hasSecondLevelShown;
	UIViewController* _actionSheetMenuViewController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBSecondaryActionMenuControllerListener> _listener;
	/*^block*/id _pendingDismissActionBlock;

}

@property (nonatomic,copy) id pendingDismissActionBlock;                                        //@synthesize pendingDismissActionBlock=_pendingDismissActionBlock - In the implementation block
@property (nonatomic,retain) id<FBSecondaryActionMenuControllerListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_didTapBackButton;
-(void)presentActionSheetWithSecondaryActions:(id)arg1 inView:(id)arg2 fromView:(id)arg3 ;
-(id)_buttonItemsArrayForActions:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 hasMoreButton:(BOOL)arg4 hasBackButton:(BOOL)arg5 ;
-(void)_checkButtonItemsSameIconSize:(id)arg1 ;
-(void)dismissMenu;
-(void)_applicationWilResignActiveNotification;
-(void)_sendImpressionForActionsAtLevel:(unsigned long long)arg1 ;
-(id)_menuItemsArrayForActions:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 hasMoreButton:(BOOL)arg4 hasBackButton:(BOOL)arg5 ;
-(id)pendingDismissActionBlock;
-(void)setPendingDismissActionBlock:(id)arg1 ;
-(void)_configureButtonItem:(id)arg1 withAction:(id)arg2 ;
-(id)_buttonItemForAction:(id)arg1 atPosition:(unsigned long long)arg2 isSecondLevel:(BOOL)arg3 sourceView:(id)arg4 sourceRect:(CGRect)arg5 ;
-(void)_didTapMoreButton;
-(id)_menuItemForAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(id)initWithStyle:(unsigned long long)arg1 navigationCoordinator:(id)arg2 ;
-(void)presentSecondaryActions:(id)arg1 inView:(id)arg2 fromView:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id<FBSecondaryActionMenuControllerListener>)listener;
-(void)setListener:(id<FBSecondaryActionMenuControllerListener>)arg1 ;
@end

