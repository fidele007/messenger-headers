/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@class FBMSPNewMessageHandler, MNThreadUpdateService, FBMUserInvalidator, NSString;

@interface FBMSPMontageMessageDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	FBMSPNewMessageHandler* _newMessageHandler;
	MNThreadUpdateService* _threadUpdateService;
	FBMUserInvalidator* _userInvalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNewMessageHandler:(id)arg1 updateService:(id)arg2 userInvalidator:(id)arg3 ;
-(id)_newMessageDeltaForMontageDelta:(id)arg1 ;
-(void)_processMontageMessageDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

