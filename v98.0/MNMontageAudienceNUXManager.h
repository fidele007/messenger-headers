/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMontageAudienceNUXManaging.h>

@class MNMontageAudienceNUXManagerInjector, MNMontageAudiencePicker, MNNavigationController, NSString;

@interface MNMontageAudienceNUXManager : NSObject <FBClassInjectable, MNMontageAudienceNUXManaging> {

	MNMontageAudienceNUXManagerInjector* _injector;
	MNMontageAudiencePicker* _montageAudiencePicker;
	MNNavigationController* _navigationController;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)presentMontageAudienceNuxIfNecessaryCompletionBlock:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(void)presentMontageAudienceNuxIfNecessaryForContacts:(id)arg1 completionBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)_presentMontageAudienceNUXWithCompletionBlock:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(void)_handleCustomAudienceSelectedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleAutomaticAudienceSelectedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_presentAudiencePicker;
-(void)_presentMontageError;
-(void)_didDismissMontageAudiencePicker:(id)arg1 ;
@end

