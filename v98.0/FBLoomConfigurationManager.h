/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBLoomManager.h>

@protocol FBLoomConfigurationStorageDelegate, FBLoomNetworkingSource;
@class FBLoomConfiguration, NSMutableSet, FBSimpleNetworkerRequest, NSDate, NSString;

@interface FBLoomConfigurationManager : NSObject <FBNetworkerRequestDelegate, FBLoomManager> {

	mutex _mutex;
	FBLoomConfiguration* _configuration;
	NSMutableSet* _configurables;
	FBSimpleNetworkerRequest* _simpleRequest;
	id<FBLoomConfigurationStorageDelegate> _storageDelegate;
	id<FBLoomNetworkingSource> _source;

}

@property (retain) NSDate * lastConfigurationFetch; 
@property (retain) FBLoomConfiguration * internalConfiguration; 
@property (__weak) id<FBLoomConfigurationStorageDelegate> storageDelegate;              //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (__weak) id<FBLoomNetworkingSource> source;                                   //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(void)setInternalConfiguration:(FBLoomConfiguration *)arg1 ;
-(FBLoomConfiguration *)internalConfiguration;
-(id<FBLoomConfigurationStorageDelegate>)storageDelegate;
-(void)setStartupConfigurationWithConfiguration:(id)arg1 ;
-(BOOL)fetchStartupUpdateFromDisk;
-(BOOL)fetchUpdateFromDisk;
-(BOOL)fetchUpdateFromNetwork;
-(NSDate *)lastConfigurationFetch;
-(void)setLastConfigurationFetch:(NSDate *)arg1 ;
-(void)saveInternalConfigurationToDisk;
-(void)eraseAllConfigurationData;
-(void)fetchUpdateFromDiskAfterDelay;
-(void)fetchUpdateFromNetworkAfterDelay;
-(void)addConfigurables:(id)arg1 ;
-(void)addConfigurable:(id)arg1 ;
-(void)removeConfigurable:(id)arg1 ;
-(id)configurables;
-(void)setStorageDelegate:(id<FBLoomConfigurationStorageDelegate>)arg1 ;
-(id)init;
-(void)setSource:(id<FBLoomNetworkingSource>)arg1 ;
-(id<FBLoomNetworkingSource>)source;
@end

