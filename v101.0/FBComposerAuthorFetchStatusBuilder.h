/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBComposerAuthorFetchStatusBuilder : NSObject {

	BOOL _hasFetchedGraphQLID;
	BOOL _hasFetchedAuthorType;
	BOOL _hasFetchedName;
	BOOL _hasFetchedShortName;
	BOOL _hasFetchedAccessTokenOverride;
	BOOL _hasFetchedIsMinorValue;
	BOOL _hasFetchedProfilePictureURL;
	BOOL _hasFetchedLargeProfilePictureURL;
	BOOL _hasFetchedPageCanPostOGActions;
	BOOL _hasFetchedIsViewerAllowedToPostAsAuthorEntity;
	BOOL _hasFetchedIsWorkUser;
	BOOL _hasFetchedUrlString;
	BOOL _hasFetchedDefaultAlbumType;
	BOOL _hasFetchedCanTargetPostsToFollowers;
	BOOL _hasFetchedProfileBadge;

}
+(id)composerAuthorFetchStatus;
+(id)composerAuthorFetchStatusFromExistingComposerAuthorFetchStatus:(id)arg1 ;
-(id)withHasFetchedGraphQLID:(BOOL)arg1 ;
-(id)withHasFetchedAuthorType:(BOOL)arg1 ;
-(id)withHasFetchedName:(BOOL)arg1 ;
-(id)withHasFetchedShortName:(BOOL)arg1 ;
-(id)withHasFetchedAccessTokenOverride:(BOOL)arg1 ;
-(id)withHasFetchedIsMinorValue:(BOOL)arg1 ;
-(id)withHasFetchedProfilePictureURL:(BOOL)arg1 ;
-(id)withHasFetchedLargeProfilePictureURL:(BOOL)arg1 ;
-(id)withHasFetchedPageCanPostOGActions:(BOOL)arg1 ;
-(id)withHasFetchedIsViewerAllowedToPostAsAuthorEntity:(BOOL)arg1 ;
-(id)withHasFetchedIsWorkUser:(BOOL)arg1 ;
-(id)withHasFetchedUrlString:(BOOL)arg1 ;
-(id)withHasFetchedDefaultAlbumType:(BOOL)arg1 ;
-(id)withHasFetchedCanTargetPostsToFollowers:(BOOL)arg1 ;
-(id)withHasFetchedProfileBadge:(BOOL)arg1 ;
-(id)build;
@end

