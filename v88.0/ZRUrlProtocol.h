/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol FBURLProtocolUploadDelegate;
@class NSURLConnection, FBAnalytics, NSRunLoop, NSString;

@interface ZRUrlProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	unsigned long long _abortErrorCode;
	NSURLConnection* _connection;
	FBAnalytics* _analytics;
	NSRunLoop* _abortRunLoop;
	id<FBURLProtocolUploadDelegate> _uploadDelegate;

}

@property (nonatomic,retain) NSURLConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) FBAnalytics * analytics;                                     //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) NSRunLoop * abortRunLoop;                                    //@synthesize abortRunLoop=_abortRunLoop - In the implementation block
@property (assign,nonatomic) id<FBURLProtocolUploadDelegate> uploadDelegate;              //@synthesize uploadDelegate=_uploadDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isZeroRated:(id)arg1 ;
+(id)_zeroRatedRequestFromRequest:(id)arg1 ;
+(BOOL)requestShouldFail:(id)arg1 ;
+(void)removeInstance:(id)arg1 ;
+(void)abortAllRequests;
+(void)addInstance:(id)arg1 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(FBAnalytics *)analytics;
-(void)setAnalytics:(FBAnalytics *)arg1 ;
-(void)_abortLoad;
-(void)abortLoad;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 analytics:(id)arg4 ;
-(id<FBURLProtocolUploadDelegate>)uploadDelegate;
-(void)setAbortRunLoop:(NSRunLoop *)arg1 ;
-(void)_connectionDidFinishWithErrorCode:(unsigned long long)arg1 ;
-(void)_connectionDidFinish;
-(NSRunLoop *)abortRunLoop;
-(void)setUploadDelegate:(id<FBURLProtocolUploadDelegate>)arg1 ;
-(void)dealloc;
-(void)stopLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end
