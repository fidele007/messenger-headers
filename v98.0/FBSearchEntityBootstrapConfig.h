/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchBootstrapConfig.h>

@class NSString;

@interface FBSearchEntityBootstrapConfig : NSObject <FBSearchBootstrapConfig>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastStoreFullRefreshDateKeyString;
+(double)refreshIntervalWiFiForSession:(id)arg1 ;
+(double)refreshIntervalNonWiFiForSession:(id)arg1 ;
+(id)downloadRequestWithSession:(id)arg1 ;
+(id)resultsFromRequest:(id)arg1 response:(id)arg2 parseError:(id*)arg3 ;
+(id)serializeBootstrapData:(id)arg1 ;
+(id)suggestionGeneratorWithBootstrapFileManager:(id)arg1 session:(id)arg2 ;
+(id)supportedBootstrapEntityTypes;
+(unsigned long long)maxResultCount;
+(id)fileName;
@end

