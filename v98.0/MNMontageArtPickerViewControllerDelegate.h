/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMontageArtPickerViewControllerDelegate <NSObject>
@required
-(void)montageArtPickerViewController:(id)arg1 didSelectStickerItem:(id)arg2;
-(void)montageArtPickerViewController:(id)arg1 didSelectComposition:(id)arg2;
-(void)montageArtPickerViewController:(id)arg1 didSelectFilterDescriptor:(id)arg2;
-(void)montageArtPickerViewController:(id)arg1 didUnselectCompositionWithId:(id)arg2;
-(void)montageArtPickerViewController:(id)arg1 didUnselectFilterDescriptorWithId:(id)arg2;
-(void)montageArtPickerViewControllerDidDismiss:(id)arg1;
-(CGSize*)sizeOfBoundsForArt;
-(double)montageArtPickerViewControllerBottomPaddingForCollapsedState;
-(double)montageArtPickerViewControllerTopPaddingForArtPickerContent;
-(id)mediaFilterAssetManagerProviderForMontageArtPickerViewController:(id)arg1;

@end

