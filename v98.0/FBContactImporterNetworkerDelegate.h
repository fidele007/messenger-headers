/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContactImporterNetworkerDelegate <NSObject>
@required
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 withFriendableResponse:(id)arg2 forBatchAtIndex:(unsigned long long)arg3;
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 forContactRange:(NSRange)arg2 forBatchAtIndex:(unsigned long long)arg3;
-(void)contactImporterNetworkerDidPartialFail:(id)arg1 withError:(id)arg2 forBatchAtIndex:(unsigned long long)arg3;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withFriendableResponse:(id)arg2 invitableResponse:(id)arg3;
-(void)contactImporterNetworkerDidFail:(id)arg1 withError:(id)arg2;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withPYMKResponse:(id)arg2;
-(void)contactImporterNetworkerDidFail:(id)arg1 withPYMKError:(id)arg2;

@end

