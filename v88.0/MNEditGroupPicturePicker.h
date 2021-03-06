/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ThreadImagePickerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNEditGroupPicturePickerDelegate;
@class FBUserSession, MNNavigationCoordinator, UIViewController, NSString, UIAlertController, NSArray, ThreadImagePicker, FBCurrentCountryManager;

@interface MNEditGroupPicturePicker : NSObject <ThreadImagePickerDelegate, UIDocumentPickerDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	UIViewController* _viewControllerToPresent;
	id<MNEditGroupPicturePickerDelegate> _delegate;
	NSString* _analyticsModule;
	UIAlertController* _alertController;
	NSArray* _actionSheetButtons;
	ThreadImagePicker* _threadImagePicker;
	FBCurrentCountryManager* _countryManager;

}

@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,copy) NSArray * actionSheetButtons;                                        //@synthesize actionSheetButtons=_actionSheetButtons - In the implementation block
@property (nonatomic,retain) ThreadImagePicker * threadImagePicker;                             //@synthesize threadImagePicker=_threadImagePicker - In the implementation block
@property (nonatomic,retain) FBCurrentCountryManager * countryManager;                          //@synthesize countryManager=_countryManager - In the implementation block
@property (assign,nonatomic,__weak) id<MNEditGroupPicturePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                          //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(NSString *)analyticsModule;
-(void)_logEvent:(id)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)showFromBarButtonItem:(id)arg1 withRect:(CGRect)arg2 inView:(id)arg3 showRemove:(BOOL)arg4 ;
-(void)_removePicture;
-(void)_tappedActionAtIndex:(long long)arg1 ;
-(void)setActionSheetButtons:(NSArray *)arg1 ;
-(void)setThreadImagePicker:(ThreadImagePicker *)arg1 ;
-(id)_imagePickerViewController;
-(void)_pickerDidPickImage:(id)arg1 ;
-(void)_didSelectImagePickerWithSourceType:(long long)arg1 ;
-(void)_showFailedToInitializeImageError;
-(void)didPickThreadImage:(id)arg1 picker:(id)arg2 ;
-(void)threadImagePickerControllerDidCancel:(id)arg1 ;
-(NSArray *)actionSheetButtons;
-(ThreadImagePicker *)threadImagePicker;
-(FBCurrentCountryManager *)countryManager;
-(void)setCountryManager:(FBCurrentCountryManager *)arg1 ;
-(void)setDelegate:(id<MNEditGroupPicturePickerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNEditGroupPicturePickerDelegate>)delegate;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)dismiss;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)_cancel;
-(void)_pickerDidCancel;
@end

