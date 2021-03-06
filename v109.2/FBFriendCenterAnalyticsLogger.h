/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFriendCenterAnalyticsLogger : NSObject
+(void)logFriendCenterOpenedWithInitialTab:(id)arg1 sourceRef:(id)arg2 ;
+(void)logFriendCenterTabSelectedWithTab:(id)arg1 ;
+(void)logNumberOfFriendsSeenInFriendsTab:(long long)arg1 ;
+(void)logNumberOfOutgoingRequestSeenInOutgoingTab:(long long)arg1 ;
+(void)logNumberOfSuggestionsSeenInSuggestionTab:(long long)arg1 ;
+(void)logNumberOfRequestSeenAndPYMKInRequestTabWithRequestCount:(long long)arg1 pymkCount:(long long)arg2 ;
+(void)logNumberOfSearches:(unsigned long long)arg1 ;
+(void)logNumberOfSuggestionsSeenPerSearch:(unsigned long long)arg1 ;
@end

