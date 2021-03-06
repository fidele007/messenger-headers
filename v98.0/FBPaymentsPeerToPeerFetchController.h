/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

