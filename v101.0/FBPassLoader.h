/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPassLoaderDelegate;
@class NSURLConnection, NSMutableData;

@interface FBPassLoader : NSObject {

	id<FBPassLoaderDelegate> _delegate;
	NSURLConnection* _passbookConnection;
	NSMutableData* _passbookConnectionData;

}

@property (nonatomic,retain) NSURLConnection * passbookConnection;                  //@synthesize passbookConnection=_passbookConnection - In the implementation block
@property (nonatomic,copy) NSMutableData * passbookConnectionData;                  //@synthesize passbookConnectionData=_passbookConnectionData - In the implementation block
@property (assign,nonatomic,__weak) id<FBPassLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isLoading; 
-(void)loadWithRequest:(id)arg1 ;
-(void)setPassbookConnection:(NSURLConnection *)arg1 ;
-(NSURLConnection *)passbookConnection;
-(void)setPassbookConnectionData:(NSMutableData *)arg1 ;
-(NSMutableData *)passbookConnectionData;
-(void)setDelegate:(id<FBPassLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPassLoaderDelegate>)delegate;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)cancelLoading;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
@end
