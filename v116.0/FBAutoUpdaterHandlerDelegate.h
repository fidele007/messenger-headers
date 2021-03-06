/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoUpdaterHandlerDelegate <NSObject>
@optional
-(void)autoUpdaterHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3;
-(void)autoUpdaterHandler:(id)arg1 willBeginProcessingUpdate:(id)arg2;
-(void)autoUpdaterHandler:(id)arg1 willBeginStage:(unsigned long long)arg2;
-(void)autoUpdaterHandler:(id)arg1 didUpdateProgress:(id)arg2 stage:(unsigned long long)arg3;
-(void)autoUpdaterHandler:(id)arg1 didFinishStage:(unsigned long long)arg2 error:(id)arg3;
-(void)autoUpdaterHandler:(id)arg1 didFinishProcessingUpdate:(id)arg2 error:(id)arg3;
-(void)autoUpdaterHandlerWillAutomaticallyRestart:(id)arg1;

@end

