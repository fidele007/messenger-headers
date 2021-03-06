/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTKeyCommands : NSObject
+(id)sharedInstance;
-(void)registerKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(void)registerDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 action:(/*^block*/id)arg3 ;
-(void)unregisterDoublePressKeyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isDoublePressKeyCommandRegisteredForInput:(id)arg1 modifierFlags:(long long)arg2 ;
@end

