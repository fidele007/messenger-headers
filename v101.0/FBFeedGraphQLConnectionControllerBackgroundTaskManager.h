/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionControllerLoadListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FBFeedGraphQLConnectionControllerBackgroundTaskManager : NSObject <FBGraphQLConnectionControllerLoadListener> {

	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	unordered_map<NSString *, unsigned long, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::__1::allocator<std::__1::pair<NSString *const, unsigned long> > >* _loadUUIDToBackgroundTaskIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2 ;
-(void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2 ;
-(void)_startBackgroundTaskForUUID:(id)arg1 ;
-(void)_endBackgroundTaskForUUID:(id)arg1 ;
-(id)init;
@end

