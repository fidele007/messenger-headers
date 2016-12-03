/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBBrowserSavedLinksDataStoreManagerListenerAnnouncer, NSString, NSDate;

@interface FBBrowserSavedLinksDataStoreManager : NSObject {

	FBUserSession* _session;
	FBBrowserSavedLinksDataStoreManagerListenerAnnouncer* _announcer;
	int _count;
	NSString* _timeFrame;
	NSDate* _lastFetchTime;

}

@property (nonatomic,readonly) int count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeFrame;              //@synthesize timeFrame=_timeFrame - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchTime;                 //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
-(NSDate *)lastFetchTime;
-(NSString *)timeFrame;
-(void)fetchSavedLinkCountData;
-(int)count;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

