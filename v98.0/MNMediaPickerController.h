/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMediaGridViewControllerDelegate.h>
#import <Messenger/MNMediaAlbumViewControllerDelegate.h>

@protocol MNPhotosDataSource, MNMediaPickerControllerDelegate;
@class MNMediaPickerControllerInjector, UINavigationController, MNAssetsListController, MNMediaGridViewController, MNMediaAlbumViewController, MNMultiAssetPickerViewController, MNMediaAssetsLoader, NSString;

@interface MNMediaPickerController : NSObject <FBClassInjectable, MNMediaGridViewControllerDelegate, MNMediaAlbumViewControllerDelegate> {

	MNMediaPickerControllerInjector* _injector;
	id<MNPhotosDataSource> _photosDataSource;
	UINavigationController* _mediaPickerNavigationController;
	MNAssetsListController* _assetsListController;
	MNMediaGridViewController* _mediaGridViewController;
	MNMediaAlbumViewController* _mediaAlbumsViewController;
	MNMultiAssetPickerViewController* _multiAssetPickerViewController;
	MNMediaAssetsLoader* _mediaAssetsLoader;
	id<MNMediaPickerControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)configureWithDataSource:(id)arg1 ;
-(void)checkPhotosPermissionsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)presentMediaPicker;
-(void)mediaAlbumViewController:(id)arg1 didSelectCollection:(id)arg2 ;
-(BOOL)mediaGridViewController:(id)arg1 canSelectAsset:(id)arg2 ;
-(void)mediaGridViewController:(id)arg1 didSelectAsset:(id)arg2 ;
-(void)mediaGridViewController:(id)arg1 didDeselectAsset:(id)arg2 ;
-(void)mediaGridViewControllerDidTapSend:(id)arg1 ;
-(void)mediaGridViewController:(id)arg1 didTapEditForAsset:(id)arg2 image:(id)arg3 initialEditInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_prepareViewControllersToPresent;
-(void)_showMaxAssetsSelectedAlertView;
-(void)_presentAlertControllerWithMessage:(id)arg1 ;
-(void)_dismissMediaPickerViewControllerDidSendAttachments:(BOOL)arg1 ;
-(void)_initMediaGridViewControllerIfNeededAndConfigureWithAssetCollection:(id)arg1 ;
-(void)_navigationBarDidTapCancelToDismiss:(id)arg1 ;
-(void)_initMultiAssetPickerViewControllerIfNeeded;
-(void)_initMediaAlbumViewControllerIfNeeded;
-(void)setDelegate:(id<MNMediaPickerControllerDelegate>)arg1 ;
-(id<MNMediaPickerControllerDelegate>)delegate;
@end

