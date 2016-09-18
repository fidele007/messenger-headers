/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPaymentsPeerToPeerPaymentRequestDataFetcher <NSObject>
@required
-(void)paymentRequestForId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recentInitedPaymentRequestCountWithRequesteeId:(id)arg1 groupThreadId:(id)arg2 maxCount:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)recentInitedPaymentRequestsWithRequesterId:(id)arg1 requesteeId:(id)arg2 maxCount:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)getInitedPaymentRequestCountWithRequesteeId:(id)arg1 completion:(/*^block*/id)arg2;
-(id)paymentRequestForId:(id)arg1;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)recentIncompletedPaymentRequestsInOrderWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)recentPaymentRequestsWithMaxCount:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)recentPaymentRequestsWithRequesterId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)recentPaymentRequestsWithRequesteeId:(id)arg1 maxCount:(long long)arg2 completion:(/*^block*/id)arg3;

@end
