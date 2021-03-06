/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/RCTURLRequestHandler.h>
#import <Messenger/RCTInvalidating.h>

@class NSMapTable, RCTBridge, NSString;

@interface RCTFBHTTPRequestHandler : NSObject <FBNetworkerRequestDelegate, RCTURLRequestHandler, RCTInvalidating> {

	NSMapTable* _delegates;
	mutex _mutex;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(void)networkerRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3 ;
-(void)networkerRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(float)handlerPriority;
-(void)invalidate;
-(void)cancelRequest:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(RCTBridge *)bridge;
@end

