/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBCameraComponentModel, FBCameraComponentModelChangedListenerAnnouncer;


@protocol FBCameraComponentModelManager
@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer; 
@property (nonatomic,retain) id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController> captureManager; 
@property (nonatomic,retain) id<FBVideoCreativeToolsApplier> filterHandler; 
@required
-(id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController>)captureManager;
-(FBCameraComponentModel *)baseCameraModel;
-(id<FBVideoCreativeToolsApplier>)filterHandler;
-(void)setCaptureManager:(id)arg1;
-(void)setBaseCameraModel:(id)arg1;
-(FBCameraComponentModelChangedListenerAnnouncer *)modelChangedAnnouncer;
-(void)setModelChangedAnnouncer:(id)arg1;
-(void)setFilterHandler:(id)arg1;

@end
