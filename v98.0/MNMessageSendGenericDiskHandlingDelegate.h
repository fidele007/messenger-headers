/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendGenericDiskHandlingDelegate <NSObject>
@required
-(void)persistDataToDisk:(id)arg1 forType:(long long)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)restoreDataFromDiskWithType:(long long)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3;

@end
