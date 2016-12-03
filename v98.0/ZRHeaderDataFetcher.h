/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZRHeaderDataFetcherDelegate;
@class FBUserSession, FBSimpleNetworkerRequest;

@interface ZRHeaderDataFetcher : NSObject {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _pendingRequest;
	id<ZRHeaderDataFetcherDelegate> _delegate;

}

@property (assign,nonatomic) id<ZRHeaderDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelHeaderRequest;
-(void)sendHeaderRequest;
-(void)setDelegate:(id<ZRHeaderDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<ZRHeaderDataFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
