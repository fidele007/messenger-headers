/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {

	BFCancellationToken* _token;

}

@property (nonatomic,readonly) BFCancellationToken * token;                                            //@synthesize token=_token - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested; 
+(id)cancellationTokenSource;
-(BOOL)isCancellationRequested;
-(void)cancelAfterDelay:(int)arg1 ;
-(void)cancel;
-(id)init;
-(BFCancellationToken *)token;
-(void)dispose;
@end

