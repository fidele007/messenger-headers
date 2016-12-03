/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPhotoViewImageDownloadControlling.h>

@protocol MNSecureImageRequesting;
@class MNImageRequester, NSMutableSet, FBMobileConfigContextManager, NSString;

@interface MNPhotoViewImageDownloadController : NSObject <MNPhotoViewImageDownloadControlling> {

	MNImageRequester* _imageRequester;
	id<MNSecureImageRequesting> _secureImageRequester;
	NSMutableSet* _pendingOperations;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 imageFlags:(unsigned long long)arg4 animated:(BOOL)arg5 keepCurrentImage:(BOOL)arg6 skipMiniPreview:(BOOL)arg7 analyticsTags:(id)arg8 callbackQueue:(id)arg9 successBlock:(/*^block*/id)arg10 failureBlock:(/*^block*/id)arg11 ;
-(void)clearPhotoView:(id)arg1 ;
-(id)configurePhotoView:(id)arg1 withPhotoViewModel:(id)arg2 size:(int)arg3 animated:(BOOL)arg4 analyticsTags:(id)arg5 ;
-(id)initWithImageRequester:(id)arg1 secureImageRequester:(id)arg2 configManager:(id)arg3 ;
-(void)_setMiniPreviewForPhotoView:(id)arg1 withPhotoViewModel:(id)arg2 ;
-(id)_startAssociatedRequestForPhotoView:(id)arg1 plainPhotoSource:(id)arg2 size:(int)arg3 imageFlags:(unsigned long long)arg4 animated:(BOOL)arg5 analyticsTags:(id)arg6 success:(/*^block*/id)arg7 failure:(/*^block*/id)arg8 ;
-(id)_configureAnimatedImageWithNetworkPhotoInfo:(id)arg1 photoView:(id)arg2 plainPhotoSource:(id)arg3 size:(int)arg4 animated:(BOOL)arg5 analyticsTags:(id)arg6 callbackQueue:(id)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(id)_startAssociatedRequestForPhotoView:(id)arg1 securePhotoSource:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_clearImageTokenFromRequestAndPendingOps:(id)arg1 ;
-(void)_handleFetchedImage:(id)arg1 forImageRequest:(id)arg2 photoSource:(id)arg3 success:(/*^block*/id)arg4 ;
-(void)_handleFailureForImageRequest:(id)arg1 error:(id)arg2 photoSource:(id)arg3 failure:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)_cancelRequest:(id)arg1 ;
@end

