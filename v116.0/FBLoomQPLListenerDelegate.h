/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLoomQPLListenerDelegate
@required
-(BOOL)QPLTraceDidStartWithMarkerID:(int)arg1 uniqueID:(int)arg2 timestamp:(long long)arg3;
-(void)QPLTraceWillCancelWithMarkerID:(int)arg1 uniqueID:(int)arg2;
-(void)QPLTraceDidAnnotateWithMarkerID:(int)arg1 annotationKey:(const char*)arg2 annotationValue:(const char*)arg3 uniqueID:(int)arg4;
-(void)QPLTraceDidTagWithMarkerID:(int)arg1 tag:(const char*)arg2 uniqueID:(int)arg3;
-(void)QPLTraceDidNoteWithMarkerID:(int)arg1 actionID:(short)arg2 noteTag:(const char*)arg3 timestamp:(long long)arg4 uniqueID:(int)arg5;
-(void)QPLTraceWillEndWithMarkerID:(int)arg1 actionID:(short)arg2 timestamp:(long long)arg3 uniqueID:(int)arg4;

@end

