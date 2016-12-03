/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRapidReportingUIProvider, FBRapidReportingAdditionalDataUploader, FBNavigationCoordinator;
@class FBUserSession, FBScenePath, FBRapidReportingNavigationController;

@interface FBRapidReportingToolbox : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBRapidReportingUIProvider> _uiProvider;
	id<FBRapidReportingAdditionalDataUploader> _dataUploader;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBRapidReportingNavigationController* _reportingNavigationController;

}

@property (nonatomic,readonly) FBUserSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                           //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) id<FBRapidReportingUIProvider> uiProvider;                                         //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,readonly) id<FBRapidReportingAdditionalDataUploader> dataUploader;                           //@synthesize dataUploader=_dataUploader - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                                 //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) FBRapidReportingNavigationController * reportingNavigationController;              //@synthesize reportingNavigationController=_reportingNavigationController - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(FBScenePath *)scenePath;
-(FBRapidReportingNavigationController *)reportingNavigationController;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 uiProvider:(id)arg3 dataUploader:(id)arg4 navigationCoordinator:(id)arg5 navigationController:(id)arg6 ;
-(id<FBRapidReportingAdditionalDataUploader>)dataUploader;
-(FBUserSession *)session;
-(id<FBRapidReportingUIProvider>)uiProvider;
@end

