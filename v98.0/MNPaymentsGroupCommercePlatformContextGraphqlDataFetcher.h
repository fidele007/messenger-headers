/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsGroupCommercePlatformContextDataFetcher.h>

@class FBPaymentsPeerToPeerFetchController, NSMutableDictionary, NSString;

@interface MNPaymentsGroupCommercePlatformContextGraphqlDataFetcher : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsGroupCommercePlatformContextDataFetcher> {

	FBPaymentsPeerToPeerFetchController* _fetchController;
	NSMutableDictionary* _lookupTokenHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)initWithFetchController:(id)arg1 ;
-(void)fetchAllPlatformContextsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleContextDownloadedResponse:(id)arg1 withToken:(id)arg2 withError:(id)arg3 ;
-(void)fetchPlatformContextsForUserId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchPlatformContextForPlatformContextId:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

