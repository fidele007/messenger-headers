/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSnapshotViewControllerDelegate.h>

@class FBRefactoredNavigationController, NSMapTable, UIViewController, NSString;

@interface FBRefactoredNavigationFakePushExecutor : NSObject <FBSnapshotViewControllerDelegate> {

	FBRefactoredNavigationController* _navigationController;
	NSMapTable* _stackOfDismissedModals;
	UIViewController* _lastPushedSnapshotViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isStoringViewController:(id)arg1 ;
-(id)_snapshotViewControllerForStoredModalViewController:(id)arg1 ;
-(void)snapshotViewControllerDidAppear:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 inWindow:(id)arg3 ;
-(void)cleanupAfterViewControllerDismissalFromNavigationStack:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
@end
