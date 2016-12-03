/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLigerProvidesNetworkStatusMonitor.h>

@class FBRadioTechnologyFetcher, NSDictionary, FBLigerNetworkStatusLogger, NSString;

@interface FBLigerNetworkStatusMonitor : NSObject <FBLigerProvidesNetworkStatusMonitor> {

	unique_ptr<proxygen::httpclient::monitor::NetworkStatusMonitor, std::__1::default_delete<proxygen::httpclient::monitor::NetworkStatusMonitor> >* _networkStatusMonitor;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	NSDictionary* _priorityLevels;
	FBLigerNetworkStatusLogger* _networkStatusLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMaxPriority:(unsigned char)arg1 radioMonitorEnabled:(BOOL)arg2 rawDataUsageLogging:(BOOL)arg3 ;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(NetworkStatusMonitor*)getNetworkStatusMonitor;
-(void)populateNetworkInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)networkChanged:(id)arg1 ;
@end

