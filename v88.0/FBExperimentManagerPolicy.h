/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy <NSObject>
@required
-(BOOL)isEmployee;
-(id)allExperimentsInCatalogAsShortDescription;
-(void)setupDebugHelperWithExperimentCatalog:(id)arg1 debugInfoProvider:(id)arg2;
-(id)plistKey;
-(void)fetchWithExperimentCatalog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 withAllGroupsAndParameters:(BOOL)arg3 scenePath:(id)arg4;
-(double)expirationTimeIntervalInSeconds;
-(id)gatekeepers;
-(BOOL)sessionless;
-(void)loadExperiments:(/*^block*/id)arg1;
-(void)persistExperiments:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)loadOverrides:(/*^block*/id)arg1;
-(void)persistOverrides:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)keyValueStore;

@end
