/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {

	BFCancellationToken* _token;

}

@property (nonatomic,readonly) BFCancellationToken * token;                                            //@synthesize token=_token - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested; 
+(id)cancellationTokenSource;
-(void)cancelAfterDelay:(int)arg1 ;
-(BOOL)isCancellationRequested;
-(void)cancel;
-(id)init;
-(BFCancellationToken *)token;
-(void)dispose;
@end

