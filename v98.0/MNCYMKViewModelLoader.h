/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSingleViewModelLoading.h>

@protocol MNAuthenticationManager, OS_dispatch_queue;
@class FBGraphQLService, NSObject, NSMutableDictionary, NSString;

@interface MNCYMKViewModelLoader : NSObject <MNSingleViewModelLoading> {

	FBGraphQLService* _graphQLService;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestIdToRequestMap;
	NSMutableDictionary* _requestIdToFetcherMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadCYMKWithRequestId:(unsigned long long)arg1 ;
-(void)_cleanUpForRequestId:(unsigned long long)arg1 ;
-(void)_loadWithContacts:(id)arg1 forRequestId:(unsigned long long)arg2 ;
-(void)_handleError:(id)arg1 forRequestId:(unsigned long long)arg2 ;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(id)initWithGraphQLService:(id)arg1 authManager:(id)arg2 queue:(id)arg3 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
@end

