/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequestDelegate <NSObject>
@optional
-(void)requestLoading:(id)arg1;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(void)request:(id)arg1 didSendTotalBytes:(unsigned long long)arg2 forExpectedNumBytes:(unsigned long long)arg3;
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(id)logRequestWithType;
-(void)request:(id)arg1 didFailWithError:(id)arg2;

@end
