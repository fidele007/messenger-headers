/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadSummaryRequestPropagating <NSObject>
@required
-(void)batchThreadSummaryRequestId:(unsigned long long)arg1 propagateResponse:(id)arg2 isComplete:(BOOL)arg3 continueBlock:(/*^block*/id)arg4;
-(void)batchThreadSummaryRequestId:(unsigned long long)arg1 failedWithError:(id)arg2 continueBlock:(/*^block*/id)arg3;

@end

