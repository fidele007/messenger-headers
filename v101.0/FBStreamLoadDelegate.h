/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStreamLoadDelegate <NSObject>
@required
-(void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 responseUUID:(id)arg4 responseStatus:(id)arg5 timestamp:(double)arg6 currentResponseChunkIndex:(unsigned long long)arg7 expectedResponseChunks:(unsigned long long)arg8;
-(void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned long long)arg1 loadRequestUUID:(id)arg2 loadRequestPriority:(long long)arg3 rawResponse:(id)arg4 responseUUID:(id)arg5 responseStatus:(id)arg6 timestamp:(double)arg7 responseChunkResults:(id)arg8 expectedResponseChunks:(unsigned long long)arg9 userInfo:(id)arg10;
-(void)streamLoadDidEnqueueDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 analyticsUUID:(id)arg3 refreshMode:(id)arg4 userInfo:(id)arg5;
-(void)streamLoadDidStartDownloadRequestWithBeforeCursor:(id)arg1 afterCursor:(id)arg2 retryCount:(unsigned long long)arg3 analyticsUUID:(id)arg4;
-(void)streamLoadDidCancelDownloadRequestWithAnalyticsUUID:(id)arg1;
-(void)streamLoadDidReceiveSuccessfulResponseForDownloadRequestWithAnalyticsUUID:(id)arg1;
-(void)streamLoadDidReceiveFailingResponseForDownloadRequestWithAnalyticsUUID:(id)arg1 error:(id)arg2 status:(id)arg3 userInfo:(id)arg4;
-(void)streamLoadDidFinishLoading:(id)arg1 userInfo:(id)arg2;

@end

