/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFriendSyncUtils : NSObject
+(id)peopleForFQLUsersResult:(id)arg1 andProfilesResult:(id)arg2 andProfilePicsResult:(id)arg3 ;
+(id)stringValue:(id)arg1 ;
+(id)setLastActiveTimeForPerson:(id)arg1 fromJSON:(id)arg2 ;
+(id)peopleForFQLUsersResult:(id)arg1 andProfilesResult:(id)arg2 andFavoritesResult:(id)arg3 andProfileNamesResult:(id)arg4 andProfilePicsResult:(id)arg5 ;
+(id)personForFQLUsersResult:(id)arg1 andProfilesResult:(id)arg2 andFavoritesResult:(id)arg3 andProfileNamesResult:(id)arg4 andProfilePicsResult:(id)arg5 ;
+(id)addFQLUserData:(id)arg1 toPersonBuilder:(id)arg2 andToNamesByPersonId:(id)arg3 ;
+(id)addFQLProfileData:(id)arg1 toPersonBuilder:(id)arg2 andToNamesByPersonId:(id)arg3 ;
+(id)addFQLFavoriteData:(id)arg1 toPersonBuilder:(id)arg2 ;
+(void)addFQLProfileNameData:(id)arg1 toProfileNamesByPersonId:(id)arg2 ;
+(void)addFQLProfilePicData:(id)arg1 toimageUrlCollectionBuildersByPersonId:(id)arg2 ;
+(id)personForFQLUsersResult:(id)arg1 andProfilesResult:(id)arg2 andProfilePicsResult:(id)arg3 ;
@end
