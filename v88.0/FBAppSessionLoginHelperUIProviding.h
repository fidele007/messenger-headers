/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

