/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(id)initWithRequestType:(unsigned long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)successBlock;
-(void)setSuccessBlock:(id)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end

