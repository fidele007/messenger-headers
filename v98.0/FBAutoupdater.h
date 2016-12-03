/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterFeedDelegate.h>

@protocol FBAutoupdaterDelegate, FBAutoupdaterVersionComparator, FBAutoupdaterFeed, FBAutoupdaterCleaner, FBAutoupdaterInstaller;
@class NSFileManager, NSTimer, NSOperationQueue, NSURL, FBAutoupdaterHost, FBAutoupdaterUpdateDriver, NSDate, NSString;

@interface FBAutoupdater : NSObject <FBAutoupdaterFeedDelegate> {

	NSFileManager* _fileManager;
	BOOL _serviceIsRunning;
	BOOL _fetchInProgress;
	NSTimer* _fetchTimer;
	NSOperationQueue* _delegateQueue;
	NSURL* _fetchURL;
	id<FBAutoupdaterDelegate> _delegate;
	id<FBAutoupdaterVersionComparator> _versionComparator;
	id<FBAutoupdaterFeed> _feed;
	id<FBAutoupdaterCleaner> _cleaner;
	id<FBAutoupdaterInstaller> _installer;
	FBAutoupdaterHost* _host;
	FBAutoupdaterUpdateDriver* _driver;
	double _checkInterval;
	NSDate* _lastCheckDate;

}

@property (nonatomic,retain) id<FBAutoupdaterVersionComparator> versionComparator;              //@synthesize versionComparator=_versionComparator - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterFeed> feed;                                        //@synthesize feed=_feed - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterCleaner> cleaner;                                  //@synthesize cleaner=_cleaner - In the implementation block
@property (nonatomic,retain) id<FBAutoupdaterInstaller> installer;                              //@synthesize installer=_installer - In the implementation block
@property (nonatomic,retain) FBAutoupdaterHost * host;                                          //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) FBAutoupdaterUpdateDriver * driver;                                //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) NSDate * lastCheckDate;                                            //@synthesize lastCheckDate=_lastCheckDate - In the implementation block
@property (nonatomic,copy) NSURL * fetchURL;                                                    //@synthesize fetchURL=_fetchURL - In the implementation block
@property (assign,nonatomic,__weak) id<FBAutoupdaterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double checkInterval;                                              //@synthesize checkInterval=_checkInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)checkInterval;
-(void)setCheckInterval:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 fetchURL:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 fetchURL:(id)arg2 delegateQueue:(id)arg3 versionComparator:(id)arg4 feed:(id)arg5 downloader:(id)arg6 unarchiver:(id)arg7 ;
-(id)initWithDelegate:(id)arg1 host:(id)arg2 fetchURL:(id)arg3 delegateQueue:(id)arg4 versionComparator:(id)arg5 feed:(id)arg6 cleaner:(id)arg7 downloader:(id)arg8 unarchiver:(id)arg9 deltaApplier:(id)arg10 preparer:(id)arg11 verifier:(id)arg12 installer:(id)arg13 ;
-(void)checkForUpdates;
-(void)_refreshTimerIfPossible;
-(id)activeUpdateWithError:(id*)arg1 ;
-(id)appliedUpdateWithError:(id*)arg1 ;
-(void)_checkTimerTriggered:(id)arg1 ;
-(void)_failLoadingUpdatesWithError:(id)arg1 ;
-(void)_finishedFetch;
-(BOOL)_verifyInstallPreconditionsForUpdate:(id)arg1 ;
-(void)_failLoadingUpdatesWithMessage:(id)arg1 ;
-(BOOL)_shouldInstallUpdate:(id)arg1 ;
-(void)_cleanUpOldUpdates;
-(void)autoupdaterFeed:(id)arg1 didFinishLoadingUpdates:(id)arg2 ;
-(void)autoupdaterFeed:(id)arg1 didFail:(id)arg2 ;
-(NSURL *)fetchURL;
-(void)setFetchURL:(NSURL *)arg1 ;
-(id<FBAutoupdaterVersionComparator>)versionComparator;
-(void)setVersionComparator:(id<FBAutoupdaterVersionComparator>)arg1 ;
-(id<FBAutoupdaterCleaner>)cleaner;
-(void)setCleaner:(id<FBAutoupdaterCleaner>)arg1 ;
-(id<FBAutoupdaterInstaller>)installer;
-(void)setInstaller:(id<FBAutoupdaterInstaller>)arg1 ;
-(NSDate *)lastCheckDate;
-(void)setLastCheckDate:(NSDate *)arg1 ;
-(void)stopService;
-(void)setDelegate:(id<FBAutoupdaterDelegate>)arg1 ;
-(id<FBAutoupdaterDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(FBAutoupdaterHost *)host;
-(id<FBAutoupdaterFeed>)feed;
-(void)setHost:(FBAutoupdaterHost *)arg1 ;
-(void)setFeed:(id<FBAutoupdaterFeed>)arg1 ;
-(void)startService;
-(void)setDriver:(FBAutoupdaterUpdateDriver *)arg1 ;
-(FBAutoupdaterUpdateDriver *)driver;
@end

