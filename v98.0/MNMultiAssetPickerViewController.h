/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNAssetsListUpdateListener.h>

@protocol MNMultiAssetPickerViewControllerDelegate;
@class MNMediaPickerAccessibilityLabelGenerator, MNAssetsListCollectionViewController, UIView, UIButton, NSString;

@interface MNMultiAssetPickerViewController : FBContainerViewController <MNAssetsListUpdateListener> {

	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	MNAssetsListCollectionViewController* _assetsListCollectionViewController;
	UIView* _assetPickerViewTopBorder;
	UIButton* _sendButton;
	id<MNMultiAssetPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMultiAssetPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotosDataRequester:(id)arg1 mediaPickerAccessibilityLabelGenerator:(id)arg2 ;
-(void)assetsListDidAppendAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)assetsListDidRemoveAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)assetsListDidReplaceSelectedAssetsWithAssets:(id)arg1 ;
-(void)_multiAssetPickerViewControllerDidTapSend:(id)arg1 ;
-(void)_layoutBottomBarItems;
-(void)_setMultiAssetPickerHidden:(BOOL)arg1 ;
-(void)setDelegate:(id<MNMultiAssetPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<MNMultiAssetPickerViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

