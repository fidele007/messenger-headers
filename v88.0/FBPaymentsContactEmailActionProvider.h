/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsContactInfoDataActionProviding.h>

@class FBUserSession, FBPaymentsContactInfoNetworkRequestPerformer, NSString;

@interface FBPaymentsContactEmailActionProvider : NSObject <FBPaymentsContactInfoDataActionProviding> {

	FBUserSession* _session;
	FBPaymentsContactInfoNetworkRequestPerformer* _networkReqeustPerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3 ;
-(void)deleteContactData:(id)arg1 actionSuccessBlock:(/*^block*/id)arg2 actionFailureBlock:(/*^block*/id)arg3 ;
-(void)addOrUpdateContactData:(id)arg1 withCollectedData:(id)arg2 setDefault:(BOOL)arg3 actionSuccessBlock:(/*^block*/id)arg4 actionFailureBlock:(/*^block*/id)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end
