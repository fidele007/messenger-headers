/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch, FBHttpRequestToken;
@class FBSecureFamilyDevice;

@interface FBAccountRecoverySearchController : NSObject {

	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBHttpRequestToken> _token;
	FBSecureFamilyDevice* _secureFamilyDevice;

}
-(id)initWithRequesterConfiguration:(id)arg1 secureFamilyDevice:(id)arg2 ;
-(void)fetchAccountsWithCuid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchAccountsWithQueryString:(id)arg1 friendName:(id)arg2 cuid:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchAccountsWithQueryString:(id)arg1 friendName:(id)arg2 cuid:(id)arg3 sfdid:(id)arg4 fdid:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAccountsWithQueryString:(id)arg1 friendName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelFetch;
@end

