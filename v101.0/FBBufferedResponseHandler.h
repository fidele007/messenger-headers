/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReceivedDataBufferDelegate.h>
#import <Messenger/FBResponseHandling.h>

@protocol FBRequest, FBResponseHandlerDelegate;
@class FBReceivedDataMemoryBuffer, NSString;

@interface FBBufferedResponseHandler : NSObject <FBReceivedDataBufferDelegate, FBResponseHandling> {

	FBReceivedDataMemoryBuffer* _receivedDataBuffer;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(id)initWithRequest:(id)arg1 ;
-(void)open;
-(void)handleData:(id)arg1 ;
-(void)abort;
@end

