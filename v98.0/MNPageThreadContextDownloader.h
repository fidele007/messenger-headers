/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadContextDownloader.h>

@protocol FBServiceTransactionMutating;
@class FBGraphQLService, FBMCanonicalThreadKey, NSString;

@interface MNPageThreadContextDownloader : NSObject <FBClassProvidable, MNThreadContextDownloader> {

	FBGraphQLService* _graphQLService;
	FBMCanonicalThreadKey* _canonicalThreadKey;
	id<FBServiceTransactionMutating> _graphQLRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 ;
-(void)_processResponse:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)startDownloaderForThreadKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_startDownloaderForCanonicalThreadKey:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

