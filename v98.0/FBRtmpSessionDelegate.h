/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRtmpSessionDelegate <NSObject>
@required
-(void)rtmpSession:(id)arg1 didDropPackets:(shared_ptr<std::__1::vector<FBDroppedFrame, std::__1::allocator<FBDroppedFrame> > >*)arg2 dropReason:(id)arg3;
-(void)rtmpSessionDidFinish:(id)arg1 sendEndOfStreamError:(id)arg2;
-(void)rtmpSessionDidFail:(id)arg1 withError:(id)arg2;
-(void)rtmpSession:(id)arg1 didUpdateStreamingInfo:(compressed_pair<FBUFICountComponent *__strong *, std::__1::allocator<FBUFICountComponent *> >)arg2;
-(void)rtmpSessionWillReconnect:(id)arg1 dueToError:(id)arg2;
-(void)rtmpSession:(id)arg1 completedSpeedTestWithStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionDidStart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionWriteDidTimeout:(id)arg1;

@end
