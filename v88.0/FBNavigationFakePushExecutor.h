/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSnapshotViewControllerDelegate.h>

@protocol FBNavigationControllerInternal_DEPRECATED;
@class FBCustomNavigationController, NSMapTable, UIViewController, NSString;

@interface FBNavigationFakePushExecutor : NSObject <FBSnapshotViewControllerDelegate> {

	FBCustomNavigationController*<FBNavigationControllerInternal_DEPRECATED> _navigationController;
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

