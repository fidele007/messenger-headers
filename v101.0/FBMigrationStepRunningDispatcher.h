/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMigrationStepRunning.h>

@protocol FBMigrationStepRunning, OS_dispatch_queue;
@class NSObject, NSString;

@interface FBMigrationStepRunningDispatcher : NSObject <FBMigrationStepRunning> {

	id<FBMigrationStepRunning> _migrationStep;
	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(id)initWithMigrationStep:(id)arg1 executionQueue:(id)arg2 callbackQueue:(id)arg3 ;
@end

