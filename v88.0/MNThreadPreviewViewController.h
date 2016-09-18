/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>

@protocol MNThreadPreviewViewControllerDelegate;
@class MNThreadPreviewingContext, MNMessagesViewController, MNLoadingViewController, MNMessagesViewPresenter, MNMessagesViewByThreadQueryPresentationStrategy, MNNavigationCoordinator, NSArray, MNThreadPreviewView;

@interface MNThreadPreviewViewController : FBContainerViewController {

	MNThreadPreviewingContext* _threadPreviewingContext;
	double _previewWidth;
	MNMessagesViewController* _threadViewController;
	MNLoadingViewController* _loadingViewController;
	MNMessagesViewPresenter* _messagesViewPresenter;
	MNMessagesViewByThreadQueryPresentationStrategy* _messagesViewByDescriptorPresentationStrategy;
	MNNavigationCoordinator* _navigationCoordinator;
	NSArray* _previewActionItems;
	MNThreadPreviewView* _threadPreviewView;
	id<MNThreadPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithThreadPreviewingContext:(id)arg1 loadingViewController:(id)arg2 messagesViewPresenter:(id)arg3 messagesViewByDescriptorPresentationStrategy:(id)arg4 threadViewController:(id)arg5 navigationCoordinator:(id)arg6 previewWidth:(double)arg7 ;
-(void)navigateToThread;
-(void)_showLoadingViewControllerIfNecessary;
-(void)_loadMessagesViewWithLocalThreadKey:(id)arg1 ;
-(void)_hideLoadingViewControllerIfNecessary;
-(void)_addViewControllerAsChild:(id)arg1 ;
-(BOOL)_isThreadViewControllerDisplayed;
-(BOOL)_isLoadingViewControllerDisplayed;
-(void)_removeViewControllerFromParent:(id)arg1 ;
-(void)_showThreadViewController;
-(void)setDelegate:(id<MNThreadPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNThreadPreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end
