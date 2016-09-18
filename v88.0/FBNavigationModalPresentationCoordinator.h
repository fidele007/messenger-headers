/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalPresentationStackViewControllerDelegate.h>
#import <Messenger/FBModalPresentationSource.h>

@class UIViewController, NSMutableOrderedSet, FBRefactoredNavigationCoordinator, FBRefactoredNavigationController, FBRefactoredNavigationStateManager, FBUserSession, NSString;

@interface FBNavigationModalPresentationCoordinator : NSObject <FBModalPresentationStackViewControllerDelegate, FBModalPresentationSource> {

	UIViewController* _modalPresentingViewController;
	NSMutableOrderedSet* _modalPresentationStackManagers;
	NSMutableOrderedSet* _stackViewControllers;
	FBRefactoredNavigationCoordinator* _navigationCoordinator;
	FBRefactoredNavigationController* _navigationController;
	FBRefactoredNavigationStateManager* _navigationStateManager;
	FBUserSession* _session;

}

@property (nonatomic,retain) NSMutableOrderedSet * modalPresentationStackManagers;                              //@synthesize modalPresentationStackManagers=_modalPresentationStackManagers - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * stackViewControllers;                                      //@synthesize stackViewControllers=_stackViewControllers - In the implementation block
@property (nonatomic,__weak,readonly) FBRefactoredNavigationCoordinator * navigationCoordinator;                //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) FBRefactoredNavigationController * navigationController;                  //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) FBRefactoredNavigationStateManager * navigationStateManager;              //@synthesize navigationStateManager=_navigationStateManager - In the implementation block
@property (nonatomic,__weak,readonly) FBUserSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * modalPresentingViewController;                         //@synthesize modalPresentingViewController=_modalPresentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stackViewControllerForViewController:(id)arg1 ;
-(FBRefactoredNavigationCoordinator *)navigationCoordinator;
-(id)modalPresentationStackManager;
-(id)topStackViewController;
-(id)bottomStackViewController;
-(void)modalPresentationStackViewController:(id)arg1 willAddModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)modalPresentationStackViewController:(id)arg1 didRemoveModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)modalPresentationStackViewController:(id)arg1 didUpdateOcclusionState:(BOOL)arg2 ;
-(void)cleanUpDismissedModalViewController:(id)arg1 ;
-(id)_newStackViewController;
-(BOOL)hasModalViewController;
-(void)_dismissSingleModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performModalDismissalForViewController:(id)arg1 containerStackViewControllers:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cleanUpDismissedModalViewController:(id)arg1 containerStackViewControllers:(id)arg2 ;
-(void)_cleanupStackViewControllerOnRemoval:(id)arg1 ;
-(id)rootContainerController;
-(BOOL)hasPresentedModalPresentationLayer;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeViewControllerFromStack:(id)arg1 ;
-(BOOL)hasViewControllersOnBottomStack;
-(id)underlyingViewController;
-(id)viewControllerOnBottomStack;
-(void)addViewControllerOnTopStack:(id)arg1 ;
-(void)removeAllStacks;
-(NSMutableOrderedSet *)stackViewControllers;
-(BOOL)hasPresentedViewController:(id)arg1 fromURL:(id)arg2 presentationMethod:(unsigned long long)arg3 presentationOptions:(unsigned long long)arg4 ;
-(id)findModalPresenter;
-(void)dismissStackedModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissStackViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cleanupVC:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasNonStackModalViewController;
-(BOOL)presentModalViewController:(id)arg1 fromURL:(id)arg2 presentationMethod:(unsigned long long)arg3 presentationOptions:(unsigned long long)arg4 popoverInfo:(id)arg5 animated:(BOOL)arg6 completion:(/*^block*/id)arg7 whenClosed:(/*^block*/id)arg8 ;
-(NSMutableOrderedSet *)modalPresentationStackManagers;
-(void)setModalPresentationStackManagers:(NSMutableOrderedSet *)arg1 ;
-(void)_cleanupViewController:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 navigationController:(id)arg2 navigationStateManager:(id)arg3 session:(id)arg4 ;
-(FBRefactoredNavigationStateManager *)navigationStateManager;
-(UIViewController *)modalPresentingViewController;
-(void)_postDidChangeVisibleNotification:(id)arg1 animated:(BOOL)arg2 ;
-(void)_cleanupViewControllersPresentedByViewController:(id)arg1 ;
-(FBRefactoredNavigationController *)navigationController;
-(FBUserSession *)session;
@end
