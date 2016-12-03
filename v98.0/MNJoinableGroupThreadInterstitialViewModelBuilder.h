/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MNRoomFriendsInfoViewModel, UIColor;

@interface MNJoinableGroupThreadInterstitialViewModelBuilder : NSObject {

	NSString* _joinableLink;
	NSString* _roomName;
	NSString* _membersTitle;
	NSString* _roomAdminTitle;
	MNRoomFriendsInfoViewModel* _friendsInfoViewModel;
	NSString* _groupDescription;
	BOOL _approvalRequiredToJoin;
	NSString* _footerMessage;
	unsigned long long _currentUserJoinState;
	UIColor* _themeColor;

}
+(id)joinableGroupThreadInterstitialViewModelFromExistingJoinableGroupThreadInterstitialViewModel:(id)arg1 ;
+(id)joinableGroupThreadInterstitialViewModel;
-(id)withGroupDescription:(id)arg1 ;
-(id)withCurrentUserJoinState:(unsigned long long)arg1 ;
-(id)withJoinableLink:(id)arg1 ;
-(id)withRoomName:(id)arg1 ;
-(id)withMembersTitle:(id)arg1 ;
-(id)withRoomAdminTitle:(id)arg1 ;
-(id)withFriendsInfoViewModel:(id)arg1 ;
-(id)withApprovalRequiredToJoin:(BOOL)arg1 ;
-(id)withFooterMessage:(id)arg1 ;
-(id)withThemeColor:(id)arg1 ;
-(id)build;
@end
