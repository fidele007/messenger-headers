/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy;
@interface FBExperimentPersistentStore : NSObject {

	id<FBExperimentManagerPolicy> _policy;

}
-(void)loadExperimentsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadOverridesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)persistExperimentCatalog:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)persistExperimentOverrideData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPolicy:(id)arg1 ;
@end

