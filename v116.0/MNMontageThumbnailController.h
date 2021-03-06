/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(void)configureMontageThumbnailViewForMontageNux:(id)arg1 unread:(BOOL)arg2 ;
-(void)_resetPhotoView:(id)arg1 ;
-(void)_resetStickerView:(id)arg1 ;
-(void)_setGradientOverlayWithDominantColor:(id)arg1 forMontageThumbnailView:(id)arg2 ;
-(void)_loadPhotoFromSource:(id)arg1 forMontageThumbnail:(id)arg2 intoMontageThumbnailView:(id)arg3 ;
-(void)_resetTextView:(id)arg1 ;
-(void)_resetGradientOverlayForMontageThumbnailView:(id)arg1 ;
-(void)_cleanUpThumbnailRequestForView:(id)arg1 ;
-(void)_setPhotoThumbnail:(id)arg1 montageThumbnail:(id)arg2 intoMontageThumbnailView:(id)arg3 ;
-(void)_setPhotoThumbnail:(id)arg1 forMessageKey:(id)arg2 dominantColor:(id)arg3 intoMontageThumbnailView:(id)arg4 ;
-(void)_pickDominantColorInImage:(id)arg1 forMontageThumbnail:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

