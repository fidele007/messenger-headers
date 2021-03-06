/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CXProviderDelegate <NSObject>
@optional
-(void)provider:(id)arg1 performEndCallAction:(id)arg2;
-(void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
-(void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
-(BOOL)provider:(id)arg1 executeTransaction:(id)arg2;
-(void)provider:(id)arg1 performStartCallAction:(id)arg2;
-(void)provider:(id)arg1 timedOutPerformingAction:(id)arg2;
-(void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
-(void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
-(void)providerDidBegin:(id)arg1;
-(void)provider:(id)arg1 performSetGroupCallAction:(id)arg2;
-(void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;
-(void)provider:(id)arg1 performPlayDTMFCallAction:(id)arg2;

@required
-(void)providerDidReset:(id)arg1;

@end

