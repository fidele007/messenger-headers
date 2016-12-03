/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUpdaterDelegate;
@class NSDate, FBUpdateDataFetcher;

@interface FBUpdater : NSObject {

	unsigned long long _checkInterval;
	NSDate* _lastUpdateDate;
	FBUpdateDataFetcher* _dataFetcher;
	id<FBUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long checkInterval;                   //@synthesize checkInterval=_checkInterval - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) FBUpdateDataFetcher * dataFetcher;                  //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)forceFetchingData;
-(id)initWithUserSession:(id)arg1 forceManualUpdate:(BOOL)arg2 ;
-(id)registeredDefaultUpdateCoordinator;
-(BOOL)runService;
-(FBUpdateDataFetcher *)dataFetcher;
-(void)registerDefaultDataFetcherWithUserSession:(id)arg1 ;
-(id)initWithDataFetcher:(id)arg1 delegate:(id)arg2 forceManualUpdate:(BOOL)arg3 ;
-(unsigned long long)checkInterval;
-(void)setCheckInterval:(unsigned long long)arg1 ;
-(void)setDataFetcher:(FBUpdateDataFetcher *)arg1 ;
-(void)registerDefaultDelegate;
-(id)registeredDefaultUpdateController;
-(void)stopService;
-(void)setDelegate:(id<FBUpdaterDelegate>)arg1 ;
-(id<FBUpdaterDelegate>)delegate;
-(NSDate *)lastUpdateDate;
@end

