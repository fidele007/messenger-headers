/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAppSessionLoginHelperUIProviding <NSObject>
@required
-(void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2;
-(void)presentLoginUIFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 fromLaunch:(BOOL)arg3 successBlock:(/*^block*/id)arg4;
-(void)loginUserWithTransientToken:(id)arg1 token:(id)arg2 tokenType:(unsigned long long)arg3;
-(void)resetLoginUI;
-(BOOL)openURL:(id)arg1;

@end

