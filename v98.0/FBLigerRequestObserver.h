/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLigerRequestObserver
@required
-(void)request:(id)arg1 completedWithResponse:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3;
-(void)request:(id)arg1 failedWithError:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3;
-(void)request:(id)arg1 wasCancelledWithEvents:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg2;
-(void)requestStartedLoading:(id)arg1;

@end

