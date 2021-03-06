/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLService, FBPaymentsPeerToPeerFetchControllerListenerAnnouncer, NSMutableDictionary;

@interface FBPaymentsPeerToPeerFetchController : NSObject {

	FBGraphQLService* _graphQLService;
	FBPaymentsPeerToPeerFetchControllerListenerAnnouncer* _listenerAnnouncer;
	NSMutableDictionary* _lookupHandlesByFetchToken;

}
-(id)performFetchDataTypes:(unsigned long long)arg1 withQuery:(id)arg2 ;
-(void)cancelFetch:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 ;
-(void)_processFetchWithToken:(id)arg1 query:(id)arg2 dataTypes:(unsigned long long)arg3 response:(id)arg4 date:(id)arg5 error:(id)arg6 ;
-(void)_handleFetchWithToken:(id)arg1 query:(id)arg2 dataTypes:(unsigned long long)arg3 error:(id)arg4 ;
-(void)_handleFetchWithToken:(id)arg1 query:(id)arg2 dataTypes:(unsigned long long)arg3 response:(id)arg4 date:(id)arg5 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

