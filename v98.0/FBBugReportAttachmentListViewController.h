/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <Messenger/FBBugReportViewScreenshotAnnotationDelegate.h>

@protocol OS_dispatch_queue, FBBugReportAttachmentListViewControllerDelegate;
@class NSMutableArray, NSMutableDictionary, FBBugReportAttachmentListView, NSObject, FBBugReportAttachmentView, FBBugReportScreenshotInfo, FBBugReportCoordinator, NSArray, NSString;

@interface FBBugReportAttachmentListViewController : UIViewController <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, FBBugReportViewScreenshotAnnotationDelegate> {

	NSMutableArray* _screenshotFilenames;
	NSMutableDictionary* _tagToScreenshotInfo;
	FBBugReportAttachmentListView* _attachmentListView;
	NSObject*<OS_dispatch_queue> _attachmentsQueue;
	FBBugReportAttachmentView* _screenshotBeingAnnotated;
	FBBugReportScreenshotInfo* _screenshotBeingAnnotatedInfo;
	FBBugReportCoordinator* _coordinator;
	long long _previousStatusBarStyle;
	NSArray* _availableButtons;
	id<FBBugReportAttachmentListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBugReportAttachmentListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinator:(id)arg1 ;
-(void)videoCaptureWasAdded:(id)arg1 ;
-(void)personChoseCameraRoll;
-(void)personChoseVideoScreenCapture;
-(id)addThumbnail:(id)arg1 itemType:(int)arg2 ;
-(void)annotateScreenshot:(id)arg1 ;
-(void)playbackVideo:(id)arg1 ;
-(id)thumbnailForVideo:(id)arg1 ;
-(void)addScreenshotOrVideoAttachment:(id)arg1 ;
-(void)removeScreenshotAtIndex:(unsigned long long)arg1 ;
-(void)screenshotViewController:(id)arg1 didDismissWithChange:(BOOL)arg2 image:(id)arg3 ;
-(void)addScreenshotPressed;
-(void)removeScreenshot:(id)arg1 ;
-(void)addAttachment:(id)arg1 withFilename:(id)arg2 ;
-(void)showAddScreenshotButtonPressedState;
-(void)showAddScreenshotButtonUnpressedState;
-(void)personChoseToTakeScreenshot;
-(void)saveAttachment:(id)arg1 atFilename:(id)arg2 ;
-(void)_attachImage:(id)arg1 ;
-(void)_attachVideo:(id)arg1 ;
-(void)setDelegate:(id<FBBugReportAttachmentListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBBugReportAttachmentListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

