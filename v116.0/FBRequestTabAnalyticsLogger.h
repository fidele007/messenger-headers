/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBRequestTabAnalyticsLogger : NSObject
+(void)logRequestTabOpenedWithReason:(id)arg1 ;
+(void)logRequestTabOpenedWithReason:(id)arg1 friendRequestUnseenCount:(long long)arg2 acceptedNotifUnseenCount:(long long)arg3 ;
+(void)logRequestTabSectionSeen:(id)arg1 ;
+(void)logRequestTabNumberOfItemsSeen:(long long)arg1 inSection:(id)arg2 ;
+(void)logRequestTabAcceptedNotifDetailViewOpened;
+(void)logPYMKSuggestionSeenSkip:(id)arg1 byUser:(id)arg2 ;
+(void)logPYMKSuggestionConversion:(id)arg1 fromUser:(id)arg2 ;
+(void)logPYMKSuggestionXOut:(id)arg1 byUser:(id)arg2 ;
@end

