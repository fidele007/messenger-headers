/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNThreadContextManagerListener.h>
#import <Messenger/MNPreviewViewController.h>

@protocol MNSecureThreadExistenceInfoCacheUpdating, MNProfilePreviewViewControllerDelegate;
@class MNProfilePreviewingContext, MNProfileImageViewController, MNMessengerCodeImageDownloader, MNUserStore, MNThreadStore, MNThreadContextManager, MNSavePhotoController, MNThreadNavigationCoordinator, NSArray, MNProfilePreviewView, NSString;

@interface MNProfilePreviewViewController : UIViewController <MNThreadContextManagerListener, MNPreviewViewController> {

	MNProfilePreviewingContext* _profilePreviewingContext;
	double _previewWidth;
	MNProfileImageViewController* _profileImageViewController;
	MNMessengerCodeImageDownloader* _messengerCodeImageDownloader;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNThreadContextManager* _threadContextManager;
	MNSavePhotoController* _savePhotoController;
	BOOL _supportsMessengerCode;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	NSArray* _previewActionItems;
	MNProfilePreviewView* _profilePreviewView;
	id<MNSecureThreadExistenceInfoCacheUpdating> _secureThreadExistenceInfoCacheUpdater;
	id<MNProfilePreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNProfilePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_threadKey;
-(void)_loadThreadContext;
-(void)_loadDataForGroup;
-(void)_loadDataForUserWithUserId:(id)arg1 ;
-(void)_initPreviewActionItems;
-(void)_navigateToThreadDetails;
-(BOOL)_hasMessengerLink;
-(void)_forwardLink;
-(void)_saveAsImage;
-(void)_loadUserIdsWithThreadKey:(id)arg1 ;
-(void)_loadUsersWithUserIds:(id)arg1 ;
-(void)_loadThreadContextViewModelWithUsers:(id)arg1 ;
-(void)_loadContextWithThreadContextViewModel:(id)arg1 ;
-(void)threadContextManagerDidUpdateThreadContextForThreadKey:(id)arg1 ;
-(id)initWithProfilePreviewingContext:(id)arg1 profileImageViewController:(id)arg2 messengerCodeImageDownloader:(id)arg3 supportsMessengerCode:(BOOL)arg4 userStore:(id)arg5 threadStore:(id)arg6 threadContextManager:(id)arg7 threadNavigationCoordinator:(id)arg8 savePhotoController:(id)arg9 secureThreadExistenceInfoCacheUpdater:(id)arg10 previewWidth:(double)arg11 ;
-(void)_navigateToThread;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(void)_didFetchUser:(id)arg1 ;
-(void)setDelegate:(id<MNProfilePreviewViewControllerDelegate>)arg1 ;
-(id<MNProfilePreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end

