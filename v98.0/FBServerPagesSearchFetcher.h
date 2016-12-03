/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, FBServerPagesFetcherDelegate;
@class FBSimpleNetworkerRequest, NSString;

@interface FBServerPagesSearchFetcher : NSObject <FBNetworkerRequestDelegate> {

	id<FBNetworkDispatch> _networkDispatcher;
	FBSimpleNetworkerRequest* _networkRequest;
	unsigned long long _resultsLimit;
	unsigned long long _vcEndpointResultsLimit;
	NSString* _searchText;
	id<FBServerPagesFetcherDelegate> _delegate;

}

@property (nonatomic,copy) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic,__weak) id<FBServerPagesFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithNetworkDispatcher:(id)arg1 searchText:(id)arg2 resultsLimit:(unsigned long long)arg3 vcEndpointResultsLimit:(unsigned long long)arg4 ;
-(id)_createRequestParameters;
-(void)parseResponse:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBServerPagesFetcherDelegate>)arg1 ;
-(id<FBServerPagesFetcherDelegate>)delegate;
-(NSString *)searchText;
-(void)fetch;
-(void)setSearchText:(NSString *)arg1 ;
@end

