/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNThreadContextManagerListener.h>
#import <Messenger/MNPreviewViewController.h>

@protocol MNProfilePreviewViewControllerDelegate;
@class MNProfilePreviewingContext, MNProfileImageViewController, MNMessengerCodeImageDownloader, MNUserStore, MNThreadStore, MNThreadContextManager, MNSavePhotoController, MNThreadParticipantNameFormatter, MNThreadViewModel, MNThreadNavigationCoordinator, NSArray, MNProfilePreviewView, NSString;

@interface MNProfilePreviewViewController : UIViewController <MNThreadContextManagerListener, MNPreviewViewController> {

	MNProfilePreviewingContext* _profilePreviewingContext;
	double _previewWidth;
	MNProfileImageViewController* _profileImageViewController;
	MNMessengerCodeImageDownloader* _messengerCodeImageDownloader;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNThreadContextManager* _threadContextManager;
	MNSavePhotoController* _savePhotoController;
	MNThreadParticipantNameFormatter* _threadParticipantNameFormatter;
	MNThreadViewModel* _threadViewModel;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	NSArray* _previewActionItems;
	MNProfilePreviewView* _profilePreviewView;
	id<MNProfilePreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNProfilePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_threadKey;
-(void)_didFetchUser:(id)arg1 ;
-(void)_initPreviewActionItems;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(void)_forwardLink;
-(id)initWithProfilePreviewingContext:(id)arg1 profileImageViewController:(id)arg2 messengerCodeImageDownloader:(id)arg3 userStore:(id)arg4 threadStore:(id)arg5 threadContextManager:(id)arg6 threadNavigationCoordinator:(id)arg7 savePhotoController:(id)arg8 previewWidth:(double)arg9 ;
-(void)_loadThreadContext;
-(void)_loadDataForGroup;
-(void)_loadDataForUserWithUserId:(id)arg1 ;
-(void)_navigateToThread;
-(void)_navigateToThreadDetails;
-(BOOL)_hasMessengerLink;
-(void)_saveAsImage;
-(void)_loadUserIdsWithThreadKey:(id)arg1 ;
-(void)_loadUsersWithUserIds:(id)arg1 ;
-(void)_loadThreadContextViewModelWithUsers:(id)arg1 ;
-(void)_loadContextWithThreadContextViewModel:(id)arg1 ;
-(void)threadContextManagerDidUpdateThreadContextForThreadKey:(id)arg1 ;
-(void)setDelegate:(id<MNProfilePreviewViewControllerDelegate>)arg1 ;
-(id<MNProfilePreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end

