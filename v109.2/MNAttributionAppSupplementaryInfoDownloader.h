/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(id)initWithSession:(id)arg1 requestParameters:(id)arg2 maxCacheAge:(double)arg3 threadKey:(id)arg4 ;
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)setDelegate:(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)arg1 ;
-(id<MNAttributionAppSupplementaryInfoDownloaderDelegate>)delegate;
-(void)start;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)appID;
@end

