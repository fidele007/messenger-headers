/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFacebookRequestSender.h>
#import <Messenger/FBMessengerRequestManager.h>

@protocol FBAppSessionController;
@class FBFacebook, NSString;

@interface FBMessengerRequestManagerImpl : NSObject <FBFacebookRequestSender, FBMessengerRequestManager> {

	FBFacebook* _facebook;
	id<FBAppSessionController> _appSessionController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleFBRequestError:(id)arg1 ;
-(id)sendSynchronousRequestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andTimeout:(double)arg4 withError:(id*)arg5 ;
-(id)squarePhotoURLForUserId:(id)arg1 ;
-(id)sendSynchronousRequestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 withError:(id*)arg4 ;
-(id)sendSynchronousRequestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 withError:(id*)arg4 ;
-(id)facebookErrorDomain;
-(id)initWithFacebook:(id)arg1 appSessionController:(id)arg2 ;
@end
