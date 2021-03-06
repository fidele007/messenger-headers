/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@class FBMForegroundJobSchedulerInjector, NSMutableDictionary, NSString;

@interface FBMForegroundJobScheduler : NSObject <FBClassInjectable> {

	FBMForegroundJobSchedulerInjector* _injector;
	NSMutableDictionary* _blocks;
	BOOL _didAlreadyRegisterThisForegroundSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(unsigned long long)scheduleBlockToRunOnForeground:(/*^block*/id)arg1 ;
-(void)clearScheduledBlock:(unsigned long long)arg1 ;
-(void)_handleServicesAreAvailable;
-(void)_handleDidEnterForeground;
-(void)_handleWillResignActive;
-(void)_executeAllBlocks;
-(id)initWithInjector:(id)arg1 ;
-(void)dealloc;
@end

