/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamResponseHandler.h>

@protocol FBCKStreamResponseHandlerProcessingDelegate;
@interface FBCKStreamResponseHandler : FBStreamResponseHandler {

	id<FBCKStreamResponseHandlerProcessingDelegate> _processingDelegate;

}
-(id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 parser:(id)arg3 analytics:(id)arg4 processingDelegate:(id)arg5 ;
-(id)loadResultForResponse:(id)arg1 query:(id)arg2 ;
-(id)loadResultForIncorrectResponse;
-(void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(BOOL)arg4 responseUUID:(id)arg5 status:(id)arg6 ;
-(void)processCancelledRequest:(id)arg1 status:(id)arg2 ;
-(void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3 ;
@end

