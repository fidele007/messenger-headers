/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadViewModelLoaderStateMachineListening <NSObject>
@required
-(void)stateForViewModelRequest:(unsigned long long)arg1 didUpdateFromThreadRequestState:(unsigned long long)arg2 toThreadRequestState:(unsigned long long)arg3 userRequestState:(unsigned long long)arg4 threadViewModelLoadResult:(id)arg5 error:(id)arg6;
-(void)stateForViewModelRequest:(unsigned long long)arg1 didUpdateFromUserRequestState:(unsigned long long)arg2 toUserRequestState:(unsigned long long)arg3 threadRequestState:(unsigned long long)arg4 threadViewModelLoadResult:(id)arg5 error:(id)arg6;
-(void)didCleanUpViewModelRequestWithId:(unsigned long long)arg1;

@end
