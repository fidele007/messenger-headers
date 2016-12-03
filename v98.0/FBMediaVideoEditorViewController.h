/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UINavigationController.h>
#import <Messenger/FBVideoEditingViewControllerDelegate.h>
#import <Messenger/FBCancellableVideoEditingViewControllerDelegate.h>
#import <Messenger/FBMediaViewControllerProtocol.h>

@protocol FBMediaVideoEditorViewControllerDelegate;
@class FBCancellableVideoEditingViewController, FBMediaVideoManager, FBVideoAsset, NSString;

@interface FBMediaVideoEditorViewController : UINavigationController <FBVideoEditingViewControllerDelegate, FBCancellableVideoEditingViewControllerDelegate, FBMediaViewControllerProtocol> {

	FBCancellableVideoEditingViewController* _videoEditingController;
	FBMediaVideoManager* _videoManager;
	long long _hdUploadSelectionState;
	BOOL _trimmerBubbleEnabled;
	BOOL _showEstimatedFileSize;
	BOOL _useEstimatedTranscodedFileSize;
	BOOL _disableFilterConfig;
	FBVideoAsset* _asset;
	unsigned long long _videoMaxTranscodedSize;
	id<FBMediaVideoEditorViewControllerDelegate> _editorDelegate;

}

@property (nonatomic,retain) FBVideoAsset * asset;                                                            //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB25 videoMinLength; 
@property (assign,nonatomic) SCD_Struct_FB25 videoMaxLength; 
@property (assign,getter=isTrimmerBubbleEnabled,nonatomic) BOOL trimmerBubbleEnabled;                         //@synthesize trimmerBubbleEnabled=_trimmerBubbleEnabled - In the implementation block
@property (assign,nonatomic) BOOL showEstimatedFileSize;                                                      //@synthesize showEstimatedFileSize=_showEstimatedFileSize - In the implementation block
@property (assign,nonatomic) BOOL useEstimatedTranscodedFileSize;                                             //@synthesize useEstimatedTranscodedFileSize=_useEstimatedTranscodedFileSize - In the implementation block
@property (assign,nonatomic) BOOL disableFilterConfig;                                                        //@synthesize disableFilterConfig=_disableFilterConfig - In the implementation block
@property (assign,nonatomic) unsigned long long videoMaxTranscodedSize;                                       //@synthesize videoMaxTranscodedSize=_videoMaxTranscodedSize - In the implementation block
@property (assign,nonatomic) BOOL soundControlEnabled; 
@property (assign,nonatomic,__weak) id<FBMediaVideoEditorViewControllerDelegate> editorDelegate;              //@synthesize editorDelegate=_editorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoManager:(id)arg1 sessionId:(id)arg2 source:(id)arg3 rightBarButtonTitle:(id)arg4 enableHDUploadButton:(BOOL)arg5 hdUploadSelected:(BOOL)arg6 style:(unsigned long long)arg7 ;
-(void)setVideoMinLength:(SCD_Struct_FB25)arg1 ;
-(void)setShowEstimatedFileSize:(BOOL)arg1 ;
-(void)setUseEstimatedTranscodedFileSize:(BOOL)arg1 ;
-(void)setTrimmerBubbleEnabled:(BOOL)arg1 ;
-(void)setDisableFilterConfig:(BOOL)arg1 ;
-(void)setVideoMaxTranscodedSize:(unsigned long long)arg1 ;
-(void)cancellableVideoEditingViewControllerFinished:(id)arg1 withEdits:(id)arg2 isCancelled:(BOOL)arg3 ;
-(SCD_Struct_FB25)videoMinLength;
-(SCD_Struct_FB25)videoMaxLength;
-(void)setVideoMaxLength:(SCD_Struct_FB25)arg1 ;
-(void)_handleCreatingVideoClip:(id)arg1 ;
-(void)_setMaxVideoDurationBySize:(id)arg1 ;
-(BOOL)soundControlEnabled;
-(void)setSoundControlEnabled:(BOOL)arg1 ;
-(void)_finishEditingWithThumbnailImage:(id)arg1 isCancelled:(BOOL)arg2 ;
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB26)arg2 ;
-(void)videoEditingViewController:(id)arg1 didChangeMuteState:(BOOL)arg2 ;
-(void)videoEditingViewController:(id)arg1 didChangeCropOriginWidthProportion:(double)arg2 cropOriginHeightProportion:(double)arg3 ;
-(void)videoEditingViewController:(id)arg1 didChangeFilterConfig:(id)arg2 ;
-(void)videoEditingViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2 ;
-(void)videoEditingViewControllerDidChangeToTrimView:(id)arg1 ;
-(void)videoEditingViewControllerDidChangeToSoundView:(id)arg1 ;
-(void)videoEditingViewControllerDidChangeToCropView:(id)arg1 ;
-(void)videoEditingViewControllerDidChangeToFilterView:(id)arg1 ;
-(void)videoEditingViewControllerDidChangeToCoverView:(id)arg1 ;
-(void)willPresentMediaAtDataSourceIndex:(unsigned long long)arg1 fromCamera:(BOOL)arg2 showAll:(BOOL)arg3 allowPaging:(BOOL)arg4 showTaggingMode:(BOOL)arg5 source:(unsigned long long)arg6 forDataSource:(id)arg7 photoAssetDoesNotNeedRecycle:(BOOL)arg8 ;
-(BOOL)hasMultiSelectSupport;
-(unsigned long long)presentationAssetType;
-(void)setTransitionView:(id)arg1 ;
-(id)initWithSession:(id)arg1 source:(id)arg2 enableHDUploadButton:(BOOL)arg3 hdUploadSelected:(BOOL)arg4 ;
-(BOOL)isTrimmerBubbleEnabled;
-(BOOL)showEstimatedFileSize;
-(BOOL)useEstimatedTranscodedFileSize;
-(BOOL)disableFilterConfig;
-(unsigned long long)videoMaxTranscodedSize;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)preferredInterfaceOrientationForPresentation;
-(FBVideoAsset *)asset;
-(void)setAsset:(FBVideoAsset *)arg1 ;
-(void)setEditorDelegate:(id<FBMediaVideoEditorViewControllerDelegate>)arg1 ;
-(id<FBMediaVideoEditorViewControllerDelegate>)editorDelegate;
@end

