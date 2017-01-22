/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBImageProcessingFaceDetectRequestProtocol;
#import <Messenger/Messenger-Structs.h>
@class FBPhotoAsset, FBMediaImageManager, FBUserSession, FBScenePath, FBImageProcessingRequest, FBImageProcessingFilterRequest, FBImageProcessingFaceCropRequest, NSMutableDictionary;

@interface FBPhotoAssetPreparer : NSObject {

	FBPhotoAsset* _photoAsset;
	FBMediaImageManager* _imageManager;
	FBUserSession* _currentFBSession;
	BOOL _startedTagSuggestionRequest;
	BOOL _isFaceRecPrepared;
	BOOL _didLoadImagesIntoAsset;
	FBPhotoAssetPreparerConfiguration _configuration;
	FBScenePath* _scenePath;
	FBImageProcessingRequest* _resizeRequestForImageLoading;
	FBImageProcessingRequest* _resizeRequestForFaceRec;
	FBImageProcessingFilterRequest* _filterRequest;
	id<FBImageProcessingFaceDetectRequestProtocol> _faceDetectRequest;
	FBImageProcessingFaceCropRequest* _faceCropRequest;
	NSMutableDictionary* _userInteractedFaceBoxes;

}

@property (nonatomic,retain) FBScenePath * scenePath;                                                       //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,retain) FBImageProcessingRequest * resizeRequestForImageLoading;                       //@synthesize resizeRequestForImageLoading=_resizeRequestForImageLoading - In the implementation block
@property (nonatomic,retain) FBImageProcessingRequest * resizeRequestForFaceRec;                            //@synthesize resizeRequestForFaceRec=_resizeRequestForFaceRec - In the implementation block
@property (nonatomic,retain) FBImageProcessingFilterRequest * filterRequest;                                //@synthesize filterRequest=_filterRequest - In the implementation block
@property (nonatomic,retain) id<FBImageProcessingFaceDetectRequestProtocol> faceDetectRequest;              //@synthesize faceDetectRequest=_faceDetectRequest - In the implementation block
@property (nonatomic,retain) FBImageProcessingFaceCropRequest * faceCropRequest;                            //@synthesize faceCropRequest=_faceCropRequest - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInteractedFaceBoxes;                                 //@synthesize userInteractedFaceBoxes=_userInteractedFaceBoxes - In the implementation block
@property (nonatomic,readonly) FBPhotoAssetPreparerConfiguration configuration;                             //@synthesize configuration=_configuration - In the implementation block
-(void)setScenePath:(FBScenePath *)arg1 ;
-(FBScenePath *)scenePath;
-(id)initWithPhotoAsset:(id)arg1 imageManager:(id)arg2 currentFBSession:(id)arg3 configuration:(FBPhotoAssetPreparerConfiguration)arg4 ;
-(void)loadImagesIntoAssetWithScenePath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareAssetByRunningFaceRecognitionWithScenePath:(id)arg1 ;
-(void)setFilterRequest:(FBImageProcessingFilterRequest *)arg1 ;
-(void)_startRecognize:(id)arg1 withFaces:(id)arg2 ;
-(void)_logTTIEventForSource:(id)arg1 starTime:(unsigned long long)arg2 ;
-(void)setFaceCropRequest:(FBImageProcessingFaceCropRequest *)arg1 ;
-(void)setFaceDetectRequest:(id<FBImageProcessingFaceDetectRequestProtocol>)arg1 ;
-(void)_prepareFaceFeaturesWithScenePath:(id)arg1 shouldRecognizeFaces:(BOOL)arg2 faceDetectionCompletion:(/*^block*/id)arg3 ;
-(void)_detectFace:(id)arg1 shouldRecognizeFaces:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startRecognize:(id)arg1 withFaceboxes:(id)arg2 ;
-(void)setResizeRequestForFaceRec:(FBImageProcessingRequest *)arg1 ;
-(void)_filterImage:(id)arg1 withGPUFilters:(id)arg2 cpuFilterState:(id)arg3 cpuFilterMetadata:(id)arg4 photoOverlayLayer:(id)arg5 doodlesLayer:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setResizeRequestForImageLoading:(FBImageProcessingRequest *)arg1 ;
-(void)setUserDidInteractWithFaceBox:(id)arg1 ;
-(void)prepareAssetByRunningFaceRecognitionWithCompletion:(/*^block*/id)arg1 ;
-(void)detectFacesWithoutRunningFaceRecognitionWithCompletion:(/*^block*/id)arg1 ;
-(FBImageProcessingRequest *)resizeRequestForImageLoading;
-(FBImageProcessingRequest *)resizeRequestForFaceRec;
-(FBImageProcessingFilterRequest *)filterRequest;
-(id<FBImageProcessingFaceDetectRequestProtocol>)faceDetectRequest;
-(FBImageProcessingFaceCropRequest *)faceCropRequest;
-(NSMutableDictionary *)userInteractedFaceBoxes;
-(void)setUserInteractedFaceBoxes:(NSMutableDictionary *)arg1 ;
-(BOOL)cancel;
-(void)dealloc;
-(FBPhotoAssetPreparerConfiguration)configuration;
@end
