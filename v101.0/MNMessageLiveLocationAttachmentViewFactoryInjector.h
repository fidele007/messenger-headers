/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBUserSession, MNMessageLiveLocationIncomingManager, MNMessageLiveLocationOutgoingManager, MNMessageLiveLocationConfigManager, MNDateFormatter, NSString;

@interface MNMessageLiveLocationAttachmentViewFactoryInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	MNMessageLiveLocationIncomingManager* _incomingManager;
	MNMessageLiveLocationOutgoingManager* _outgoingManager;
	MNMessageLiveLocationConfigManager* _configManager;
	MNDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationIncomingManager * incomingManager;              //@synthesize incomingManager=_incomingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationOutgoingManager * outgoingManager;              //@synthesize outgoingManager=_outgoingManager - In the implementation block
@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * configManager;                  //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNDateFormatter * dateFormatter;                                     //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNMessageLiveLocationConfigManager *)configManager;
-(MNMessageLiveLocationIncomingManager *)incomingManager;
-(MNMessageLiveLocationOutgoingManager *)outgoingManager;
-(FBUserSession *)session;
-(MNDateFormatter *)dateFormatter;
@end

