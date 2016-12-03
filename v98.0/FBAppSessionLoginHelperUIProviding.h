/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAppSessionLoginHelperUIProviding <NSObject>
@required
-(void)presentLoginUIFromRootWindow:(id)arg1 showSpinner:(BOOL)arg2 fromLaunch:(BOOL)arg3 successBlock:(/*^block*/id)arg4;
-(void)loginNewlyRegisteredUser:(id)arg1 nonce:(id)arg2;
-(void)loginUserWithTransientToken:(id)arg1 token:(id)arg2 tokenType:(unsigned long long)arg3;
-(void)resetLoginUI;
-(BOOL)openURL:(id)arg1;

@end

