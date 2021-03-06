/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWhistleDelegate <NSObject>
@required
-(void)onConnectSent;
-(void)onConnSuccess:(id)arg1;
-(void)onConnFailure:(id)arg1;
-(void)onPingResponseTimeout;
-(void)onPublishWithTopic:(id)arg1 messageId:(id)arg2 qos:(int)arg3 payload:(id)arg4 receiveTime:(double)arg5;
-(void)onPublishSentWithMessageId:(id)arg1 context:(id)arg2;
-(void)onPublishFailedWithContext:(id)arg1 error:(id)arg2;
-(void)onPubAckWithMessageId:(id)arg1;
-(void)onSubAckWithMessageId:(id)arg1;
-(void)onPingRequestSent;
-(void)onPingResponse;
-(void)onError:(id)arg1;

@end

