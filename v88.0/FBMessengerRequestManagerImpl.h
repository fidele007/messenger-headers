/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

