/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNMontageNuxEntryPointFunnel : NSObject
+(id)montageNuxFunnelEntryPointValue:(long long)arg1 ;
+(id)entryPointTagFromEntryPointString:(id)arg1 ;
+(id)msgCountTagFromNuxMessageCount:(long long)arg1 ;
+(id)actionValueTagFromNuxMessageIndex:(long long)arg1 ;
+(void)logNuxOpenWithEntryPoint:(id)arg1 nuxMessagesCount:(long long)arg2 ;
+(void)logNuxMessageViewedWithNuxMessageIndex:(long long)arg1 ;
+(void)logNuxCloseFunnel;
@end

