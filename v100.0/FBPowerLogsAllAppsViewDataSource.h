/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBPowerLogsDownloading;
@class FBDiagnosticsAppTimeDownloader, NSArray, NSDictionary, NSString;

@interface FBPowerLogsAllAppsViewDataSource : NSObject <UITableViewDataSource> {

	FBDiagnosticsAppTimeDownloader* _downloader;
	NSArray* _appsByEnergyDrain;
	NSDictionary* _appToHoursMap;
	double _totalEnergy;
	id<FBPowerLogsDownloading> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPowerLogsDownloading> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didDownloadBatteryIntervals:(NSDictionary*)arg1 ;
-(id)batteryDictionaryForIndexPath:(id)arg1 ;
-(void)setDelegate:(id<FBPowerLogsDownloading>)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBPowerLogsDownloading>)delegate;
-(void)startDownload;
@end

