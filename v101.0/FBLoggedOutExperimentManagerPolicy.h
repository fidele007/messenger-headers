/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentManagerPolicy.h>

@class FBExperimentDebugHelper, NSString;

@interface FBLoggedOutExperimentManagerPolicy : NSObject <FBExperimentManagerPolicy> {

	FBExperimentDebugHelper* _debugHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmployee;
-(id)allExperimentsInCatalogAsShortDescription;
-(id)gatekeepers;
-(BOOL)sessionless;
-(id)plistKey;
-(void)fetchWithExperimentCatalog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 withAllGroupsAndParameters:(BOOL)arg3 scenePath:(id)arg4 ;
-(void)setupDebugHelperWithExperimentCatalog:(id)arg1 debugInfoProvider:(id)arg2 ;
-(double)expirationTimeIntervalInSeconds;
-(void)loadExperiments:(/*^block*/id)arg1 ;
-(void)persistExperiments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadOverrides:(/*^block*/id)arg1 ;
-(void)persistOverrides:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)store;
-(id)keyValueStore;
@end

