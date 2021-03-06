/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNThreadMediaFetcherRequest : NSObject {

	unsigned long long _requestType;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (assign,nonatomic) unsigned long long requestType;              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id successBlock;                               //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
-(void)setSuccessBlock:(id)arg1 ;
-(id)successBlock;
-(id)initWithRequestType:(unsigned long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end

