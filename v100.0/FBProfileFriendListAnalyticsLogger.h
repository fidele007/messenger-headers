/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBProfileFriendListAnalyticsLogger : NSObject
+(void)logProfileFriendListOpenWithInitialTab:(id)arg1 sourceRef:(id)arg2 targetID:(id)arg3 ;
+(void)logProfileFriendListTabSelected:(id)arg1 targetID:(id)arg2 ;
+(void)logProfileFriendListSearchBarClickedInTab:(id)arg1 targetID:(id)arg2 ;
+(void)logProfileFriendListNumberOfFriendsSeen:(long long)arg1 inTab:(id)arg2 targetID:(id)arg3 ;
+(void)logProfileFriendListOverflowButtonTappedForFriendshipStatus:(id)arg1 canViewerPostToWall:(BOOL)arg2 onTab:(id)arg3 targetID:(id)arg4 ;
+(void)logProfileFriendListTextButtonTappedForFriendshipStatus:(id)arg1 onTab:(id)arg2 targetID:(id)arg3 ;
+(void)logProfileFriendListOverflowOption:(id)arg1 selectedForFriendshipStatus:(id)arg2 onTab:(id)arg3 targetID:(id)arg4 ;
@end
