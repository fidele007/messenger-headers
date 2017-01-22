/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSessionDelegate;
@class NSArray, FBMURLRequestFormatter;

@interface FBFacebook : NSObject {

	id<FBSessionDelegate> _sessionDelegate;
	NSArray* _permissions;
	FBMURLRequestFormatter* _urlRequestFormatter;

}

@property (nonatomic,retain) FBMURLRequestFormatter * urlRequestFormatter;              //@synthesize urlRequestFormatter=_urlRequestFormatter - In the implementation block
@property (assign,nonatomic) id<FBSessionDelegate> sessionDelegate;                     //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7 timeoutOverride:(double)arg8 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5 ;
-(id)squarePhotoURLForUserId:(id)arg1 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 connectNow:(BOOL)arg5 ;
-(id)initWithURLRequestFormatter:(id)arg1 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 forceBootstrapHost:(BOOL)arg7 ;
-(BOOL)isBootstrapMethod:(id)arg1 ;
-(id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4 credentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7 ;
-(BOOL)isSpecialMethod:(id)arg1 ;
-(id)requestWithParams:(id)arg1 andDelegate:(id)arg2 ;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 forceBootstrapHost:(BOOL)arg5 ;
-(id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 andCredentials:(id)arg5 connectNow:(BOOL)arg6 timeoutOverride:(double)arg7 ;
-(id)restServerUrlForMethod:(id)arg1 ;
-(FBMURLRequestFormatter *)urlRequestFormatter;
-(void)setUrlRequestFormatter:(FBMURLRequestFormatter *)arg1 ;
-(void)dealloc;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(id)parseURLParams:(id)arg1 ;
-(void)setSessionDelegate:(id<FBSessionDelegate>)arg1 ;
-(id<FBSessionDelegate>)sessionDelegate;
@end
