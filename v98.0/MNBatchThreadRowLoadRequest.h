/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNBatchThreadRowLoadRequest : NSObject {

	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id successBlock;               //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,copy) id progressBlock;              //@synthesize progressBlock=_progressBlock - In the implementation block
-(void)setSuccessBlock:(id)arg1 ;
-(id)successBlock;
-(id)initWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end
