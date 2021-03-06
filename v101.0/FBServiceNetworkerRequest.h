/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@protocol FBRequest;
@interface FBServiceNetworkerRequest : FBNetworkerRequest {

	id<FBRequest> _networkRequest;
	/*^block*/id _successCallback;
	/*^block*/id _failureCallback;
	/*^block*/id _configurationCallback;

}

@property (nonatomic,copy) id successCallback;                    //@synthesize successCallback=_successCallback - In the implementation block
@property (nonatomic,copy) id failureCallback;                    //@synthesize failureCallback=_failureCallback - In the implementation block
@property (nonatomic,copy) id configurationCallback;              //@synthesize configurationCallback=_configurationCallback - In the implementation block
-(id)networkRequest;
-(id)failureCallback;
-(id)configurationCallback;
-(id)initWithRequest:(id)arg1 callbackPerformer:(id)arg2 workQueue:(id)arg3 ;
-(void)setSuccessCallback:(id)arg1 ;
-(void)setFailureCallback:(id)arg1 ;
-(void)setConfigurationCallback:(id)arg1 ;
-(id)successCallback;
-(void)cleanup;
@end

