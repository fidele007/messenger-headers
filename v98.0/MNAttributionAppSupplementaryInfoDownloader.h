/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNAttributionAppSupplementaryInfoDownloaderDelegate;
@class FBUserSession, MNPlatformAppRequestParameters, FBMSyncedThreadKey, NSString;

@interface MNAttributionAppSupplementaryInfoDownloader : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;
	MNPlatformAppRequestParameters* _platformAppRequestParameters;
	double _maxCacheAge;
	id<MNAttributionAppSupplementaryInfoDownloaderDelegate> _delegate;
	FBMSyncedThreadKey* _threadKey;

}

@property (assign,nonatomic,__weak) id<MNAttributionAppSupplementaryInfoDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID; 
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                                                //@synthesize threadKey=_threadKey - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 requestParameters:(id)arg2 maxCacheAge:(double)arg3 threadKey:(id)arg4 ;
-(void)setDelegate:(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)arg1 ;
-(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)delegate;
-(void)start;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)appID;
@end
