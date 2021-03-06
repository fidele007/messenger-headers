/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)rtmpSessionDidStartOrRestart:(id)arg1 withSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2;
-(void)rtmpSessionWriteDidTimeout:(id)arg1;

@end

