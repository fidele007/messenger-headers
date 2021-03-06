/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNModalPresentation, MNPhotosDataRequesting;
@class FBProviderMapData, MNMediaAssetsLoader, MNMediaPickerAccessibilityLabelGenerator, NSString;

@interface MNMediaPickerControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNMediaAssetsLoader* _mediaAssetsLoader;
	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	id<MNModalPresentation> _navigationCoordinator;
	id<MNPhotosDataRequesting> _photosDataRequester;

}

@property (nonatomic,readonly) MNMediaAssetsLoader * mediaAssetsLoader;                                                        //@synthesize mediaAssetsLoader=_mediaAssetsLoader - In the implementation block
@property (nonatomic,readonly) MNMediaPickerAccessibilityLabelGenerator * mediaPickerAccessibilityLabelGenerator;              //@synthesize mediaPickerAccessibilityLabelGenerator=_mediaPickerAccessibilityLabelGenerator - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> navigationCoordinator;                                                  //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<MNPhotosDataRequesting> photosDataRequester;                                                 //@synthesize photosDataRequester=_photosDataRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)navigationCoordinator;
-(id<MNPhotosDataRequesting>)photosDataRequester;
-(MNMediaAssetsLoader *)mediaAssetsLoader;
-(MNMediaPickerAccessibilityLabelGenerator *)mediaPickerAccessibilityLabelGenerator;
@end

