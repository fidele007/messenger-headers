/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUpdateDataFetcher.h>

@class NSURL, NSMutableData, NSURLConnection;

@interface FBOverrideUpdateDataFetcher : FBUpdateDataFetcher {

	NSURL* _manifestUrl;
	NSMutableData* _receivedData;
	NSURLConnection* _manifestConnection;

}

@property (nonatomic,retain) NSURL * manifestUrl;                               //@synthesize manifestUrl=_manifestUrl - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                      //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSURLConnection * manifestConnection;              //@synthesize manifestConnection=_manifestConnection - In the implementation block
-(void)failWithError:(id)arg1 message:(id)arg2 ;
-(id)initWithManifestURL:(id)arg1 ;
-(NSURL *)manifestUrl;
-(void)setManifestUrl:(NSURL *)arg1 ;
-(NSURLConnection *)manifestConnection;
-(void)setManifestConnection:(NSURLConnection *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)fetchData;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end

