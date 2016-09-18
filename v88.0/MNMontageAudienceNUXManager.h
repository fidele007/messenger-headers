/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)_presentMontageError;
-(void)presentMontageAudienceNuxIfNecessaryCompletionBlock:(/*^block*/id)arg1 ;
-(void)presentMontageAudienceNuxIfNecessaryForContacts:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_presentMontageAudienceNUXWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleCustomAudienceSelectedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleAutomaticAudienceSelectedWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_presentAudiencePicker;
-(void)_didDismissMontageAudiencePicker:(id)arg1 ;
@end
