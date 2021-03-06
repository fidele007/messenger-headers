/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
@interface FBExperimentPersistentStore : NSObject {

	id<FBExperimentManagerPolicy> _policy;

}
-(void)loadExperimentsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadOverridesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)persistExperimentOverrideData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)persistExperimentCatalog:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPolicy:(id)arg1 ;
@end

