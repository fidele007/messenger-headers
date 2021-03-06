/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNChainRequestResultProcessing.h>

@protocol MNSecureThreadRequestListener, OS_dispatch_queue;
@class MNHandlerSecureThreadRequest, NSObject, MNSecureThreadRequestResultAccumulator, NSString;

@interface MNSecureThreadRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNHandlerSecureThreadRequest* _request;
	id<MNSecureThreadRequestListener> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureThreadRequestResultAccumulator* _resultAccumulator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isWaitingForSubResponses;
-(BOOL)validatePreliminaryResponse;
-(BOOL)validateFinalResponse;
-(void)updateResponse:(id)arg1 completesSubResponse:(BOOL)arg2 ;
-(void)announceSuccess;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(BOOL)arg1 ;
-(void)announceFailureWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
@end

