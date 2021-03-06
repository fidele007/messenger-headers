/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMessagesSyncClientOnlyDeltaProcessing.h>

@class FBMSPMuteThreadReactionsDeltaHandlerInjector, NSString;

@interface FBMSPMuteThreadReactionsDeltaHandler : NSObject <FBClassInjectable, MNMessagesSyncClientOnlyDeltaProcessing> {

	FBMSPMuteThreadReactionsDeltaHandlerInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)deltasWithMetadataFromDeltaUnion:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processMuteThreadReactionsDelta:(id)arg1 ;
@end

