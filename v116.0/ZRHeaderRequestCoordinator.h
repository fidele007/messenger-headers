/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBUserSessionClassProvidable.h>
#import <Messenger/ZRHeaderDataFetcherDelegate.h>
#import <Messenger/ZRHeaderRequestDataFetcherDelegate.h>

@protocol ZRProjectGatingDelegate;
@class ZRHeaderRequestDataFetcher, ZRApplicationState, ZRTokenUpdater, ZRTokenCurrentNetwork, FBUserSession, ZRHeaderDataFetcher, ZRHeaderDataSender, NSDictionary, NSString;

@interface ZRHeaderRequestCoordinator : NSObject <FBUserSessionClassProvidable, ZRHeaderDataFetcherDelegate, ZRHeaderRequestDataFetcherDelegate> {

	ZRHeaderRequestDataFetcher* _providedHeaderRequestFetcher;
	ZRApplicationState* _zeroRatingState;
	ZRTokenUpdater* _zeroTokenUpdater;
	id<ZRProjectGatingDelegate> _projectGater;
	ZRTokenCurrentNetwork* _network;
	FBUserSession* _session;
	ZRHeaderRequestDataFetcher* _headerRequestFetcher;
	ZRHeaderDataFetcher* _headerDataFetcher;
	ZRHeaderDataSender* _headerDataSender;
	NSDictionary* _headerRequestParams;

}

@property (nonatomic,retain) ZRHeaderRequestDataFetcher * headerRequestFetcher;              //@synthesize headerRequestFetcher=_headerRequestFetcher - In the implementation block
@property (nonatomic,retain) ZRHeaderDataFetcher * headerDataFetcher;                        //@synthesize headerDataFetcher=_headerDataFetcher - In the implementation block
@property (nonatomic,retain) ZRHeaderDataSender * headerDataSender;                          //@synthesize headerDataSender=_headerDataSender - In the implementation block
@property (nonatomic,copy) NSDictionary * headerRequestParams;                               //@synthesize headerRequestParams=_headerRequestParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refreshZeroHeaderRequest;
-(id)initWithHeaderRequestFetcher:(id)arg1 zeroRatingState:(id)arg2 zeroTokenUpdater:(id)arg3 projectGater:(id)arg4 network:(id)arg5 session:(id)arg6 ;
-(void)setHeaderRequestFetcher:(ZRHeaderRequestDataFetcher *)arg1 ;
-(void)setHeaderDataFetcher:(ZRHeaderDataFetcher *)arg1 ;
-(id)initWithHeaderRequestFetcher:(id)arg1 zeroRatingState:(id)arg2 zeroTokenUpdater:(id)arg3 projectGater:(id)arg4 session:(id)arg5 ;
-(void)setHeaderDataSender:(ZRHeaderDataSender *)arg1 ;
-(ZRHeaderRequestDataFetcher *)headerRequestFetcher;
-(ZRHeaderDataFetcher *)headerDataFetcher;
-(ZRHeaderDataSender *)headerDataSender;
-(NSDictionary *)headerRequestParams;
-(void)setHeaderRequestParams:(NSDictionary *)arg1 ;
-(void)didFetchHeaderData:(id)arg1 ;
-(void)couldNotFetchHeaderData:(id)arg1 ;
-(void)didFetchZeroHeaderRequest:(id)arg1 ;
-(void)couldNotFetchZeroHeaderRequest:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

