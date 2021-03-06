/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPhotosDataRequesting;
@class MNImageConfigurableCache;

@interface MNImageUploadCandidateStore : NSObject {

	MNImageConfigurableCache* _configurableCache;
	id<MNPhotosDataRequesting> _photosDataRequester;

}
-(void)storeOriginalImage:(id)arg1 localPhotoInfo:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithConfigurableCache:(id)arg1 photosDataRequester:(id)arg2 ;
-(BOOL)fetchImageWithLocalInfo:(id)arg1 size:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)removeAllResizedObjectsForLocalInfo:(id)arg1 ;
-(void)deleteOriginalImageForLocalInfo:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_requestFullImageWithAssetId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

