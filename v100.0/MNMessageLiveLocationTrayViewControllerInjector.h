/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBUserSession, MNMessageLiveLocationThreadSummaryManager, MNMessageLiveLocationIncomingManager, MNMessageLiveLocationOutgoingManager, MNMessageLiveLocationConfigManager, MNThreadStore, MNLocationPickerPresenter, MNLocationPickerViewControllerFactory, NSString;

@interface MNMessageLiveLocationTrayViewControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	MNMessageLiveLocationThreadSummaryManager* _threadSummaryManager;
	MNMessageLiveLocationIncomingManager* _incomingManager;
	MNMessageLiveLocationOutgoingManager* _outgoingManager;
	MNMessageLiveLocationConfigManager* _configManager;
	MNThreadStore* _threadStore;
	MNLocationPickerPresenter* _locationPickerPresenter;
	MNLocationPickerViewControllerFactory* _locationPickerViewControllerFactory;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationThreadSummaryManager * threadSummaryManager;                         //@synthesize threadSummaryManager=_threadSummaryManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationIncomingManager * incomingManager;                                   //@synthesize incomingManager=_incomingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationOutgoingManager * outgoingManager;                                   //@synthesize outgoingManager=_outgoingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * configManager;                                       //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNThreadStore * threadStore;                                                              //@synthesize threadStore=_threadStore - In the implementation block
@property (nonatomic,readonly) MNLocationPickerPresenter * locationPickerPresenter;                                      //@synthesize locationPickerPresenter=_locationPickerPresenter - In the implementation block
@property (nonatomic,readonly) MNLocationPickerViewControllerFactory * locationPickerViewControllerFactory;              //@synthesize locationPickerViewControllerFactory=_locationPickerViewControllerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNMessageLiveLocationConfigManager *)configManager;
-(MNThreadStore *)threadStore;
-(MNLocationPickerPresenter *)locationPickerPresenter;
-(MNMessageLiveLocationIncomingManager *)incomingManager;
-(MNMessageLiveLocationOutgoingManager *)outgoingManager;
-(MNMessageLiveLocationThreadSummaryManager *)threadSummaryManager;
-(MNLocationPickerViewControllerFactory *)locationPickerViewControllerFactory;
-(FBUserSession *)session;
@end

