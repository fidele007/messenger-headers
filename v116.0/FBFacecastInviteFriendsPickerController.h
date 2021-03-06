/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAvatarPickerController.h>
#import <Messenger/FBFacecastInvitedUsersSourceDelegate.h>

@class NSMutableArray, FBFacecastAlreadyInvitedUsersSource, NSString;

@interface FBFacecastInviteFriendsPickerController : FBAvatarPickerController <FBFacecastInvitedUsersSourceDelegate> {

	NSMutableArray* _alreadyInvitedFriends;
	FBFacecastAlreadyInvitedUsersSource* _alreadyInvitedSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupDataSourceWithSession:(id)arg1 taggableCollections:(id)arg2 sortDescriptors:(id)arg3 videoID:(id)arg4 ;
-(void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)fetchAlreadyInvitedUsers:(id)arg1 alreadyInvitedUsers:(id)arg2 ;
-(id)initWithSession:(id)arg1 target:(id)arg2 videoID:(id)arg3 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
@end

