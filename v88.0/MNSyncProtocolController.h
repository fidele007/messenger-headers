/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSyncProtocolVersionProviding.h>
#import <Messenger/MNSyncProtocolConfigurationCreating.h>

@class MNSyncProtocolVersionProvider, MNSyncProtocolConfigurationCreator, NSString;

@interface MNSyncProtocolController : NSObject <MNSyncProtocolVersionProviding, MNSyncProtocolConfigurationCreating> {

	MNSyncProtocolVersionProvider* _versionProvider;
	MNSyncProtocolConfigurationCreator* _configCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long syncProtocolVersion; 
-(id)createSyncProtocolDeltaRequestConfiguration;
-(id)createSyncProtocolQueueRequestConfiguration;
-(id)createSyncProtocolDeltaRequestConfigurationForIncrementalRequest;
-(id)initWithDataStore:(id)arg1 queueParamsProvider:(id)arg2 userSession:(id)arg3 authManager:(id)arg4 configManager:(id)arg5 ;
-(unsigned long long)syncProtocolVersion;
@end

