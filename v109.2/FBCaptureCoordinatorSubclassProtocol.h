/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, FBCaptureCoordinatorFilter, FBMPRenderer, NSDictionary, FBMPPhotoCapturer, FBMPSession, NSString, FBMPCameraInfoInput, FBMPCaptureEventInput;


@protocol FBCaptureCoordinatorSubclassProtocol <NSObject>
@property (nonatomic,copy,readonly) NSArray * currentFilters; 
@property (nonatomic,readonly) FBCaptureCoordinatorFilter * currentAudioFilter; 
@property (nonatomic,readonly) FBMPRenderer * filterRenderer; 
@property (nonatomic,readonly) id<FBCaptureCoordinatorFilterFactoryProtocol> filterFactory; 
@property (nonatomic,copy,readonly) NSDictionary * filterResources; 
@property (nonatomic,readonly) FBMPPhotoCapturer * photoCapturer; 
@property (nonatomic,readonly) FBMPSession * mediaSession; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionQueue; 
@property (nonatomic,copy,readonly) NSString * sessionID; 
@property (nonatomic,readonly) unsigned long long photoUniqueId; 
@property (nonatomic,readonly) FBMPCameraInfoInput * cameraInfoInput; 
@property (nonatomic,readonly) FBMPCaptureEventInput * captureEventInput; 
@required
-(id)initWithFilterFactory:(id)arg1 logger:(id)arg2;
-(FBMPSession *)mediaSession;
-(id)firstFilter;
-(FBMPRenderer *)filterRenderer;
-(unsigned long long)photoUniqueId;
-(FBMPPhotoCapturer *)photoCapturer;
-(void)filterTopologyDidChange;
-(id<FBCaptureCoordinatorFilterFactoryProtocol>)filterFactory;
-(NSDictionary *)filterResources;
-(void)setFramerateCap:(long long)arg1;
-(id)videoFilterChainInput;
-(id)videoFilterChainOutput;
-(id)initWithCaptureCoordinator:(id)arg1;
-(FBCaptureCoordinatorFilter *)currentAudioFilter;
-(FBMPCaptureEventInput *)captureEventInput;
-(void)logCurrentFilterPerformanceWithReason:(id)arg1 parameters:(id)arg2;
-(FBMPCameraInfoInput *)cameraInfoInput;
-(NSArray *)currentFilters;
-(BOOL)canAddExtraPortWithClass:(Class)arg1 toFilter:(id)arg2;
-(void)disconnectSession;
-(id)lastFilter;
-(NSString *)sessionID;
-(NSObject*<OS_dispatch_queue>)sessionQueue;

@end

