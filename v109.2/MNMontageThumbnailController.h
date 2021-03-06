/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@class MNImageRequester, NSMapTable, FBCache, FBMobileConfigContextManager, NSString;

@interface MNMontageThumbnailController : NSObject <FBClassProvidable> {

	MNImageRequester* _imageRequester;
	NSMapTable* _thumbnailViewToThumbnailMessageKeyMap;
	NSMapTable* _thumbnailViewToThumbnailRequestMap;
	FBCache* _dominantColorCache;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureMontageThumbnailView:(id)arg1 withMontageThumbnail:(id)arg2 ;
-(void)clearMontageThumbnailView:(id)arg1 ;
-(void)configureMontageThumbnailViewForMontageNux:(id)arg1 withMontageNux:(id)arg2 unread:(BOOL)arg3 ;
-(void)_resetPhotoView:(id)arg1 ;
-(void)_resetStickerView:(id)arg1 ;
-(void)_setGradientOverlayWithDominantColor:(id)arg1 forMontageThumbnailView:(id)arg2 ;
-(void)_loadPhotoFromSource:(id)arg1 forMontageThumbnailOrNux:(id)arg2 intoMontageThumbnailView:(id)arg3 ;
-(void)_resetTextView:(id)arg1 ;
-(void)_resetGradientOverlayForMontageThumbnailView:(id)arg1 ;
-(void)_cleanUpThumbnailRequestForView:(id)arg1 ;
-(void)_setPhotoThumbnail:(id)arg1 montageThumbnailOrNux:(id)arg2 intoMontageThumbnailView:(id)arg3 ;
-(void)_setPhotoThumbnail:(id)arg1 forKey:(id)arg2 dominantColor:(id)arg3 intoMontageThumbnailView:(id)arg4 ;
-(void)_pickDominantColorInImage:(id)arg1 forMontageThumbnailOrNux:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

