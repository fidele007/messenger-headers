/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAppDefaults;

@interface FBCrashCounter : NSObject {

	FBAppDefaults* _appDefaults;

}

@property (assign,nonatomic) unsigned long long startupTimeoutCount; 
@property (assign,nonatomic) unsigned long long startupCrashCount; 
@property (assign,nonatomic) unsigned long long foregroundCrashCount; 
@property (assign,nonatomic) unsigned long long backgroundCrashCount; 
-(id)initWithAppDefaults:(id)arg1 ;
-(unsigned long long)startupTimeoutCount;
-(void)setStartupTimeoutCount:(unsigned long long)arg1 ;
-(void)setStartupCrashCount:(unsigned long long)arg1 ;
-(unsigned long long)startupCrashCount;
-(void)setForegroundCrashCount:(unsigned long long)arg1 ;
-(void)setBackgroundCrashCount:(unsigned long long)arg1 ;
-(unsigned long long)foregroundCrashCount;
-(unsigned long long)backgroundCrashCount;
-(id)init;
-(void)synchronize;
@end
