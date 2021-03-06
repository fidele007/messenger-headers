/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFriendListModelControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNFriendListModelController, MNAuthenticationManager, MNFriendsFetcherDelegate;
@class MNUserSortRankPolicy, NSString;

@interface MNFriendsFetcher : NSObject <MNFriendListModelControllerDelegate, FBClassProvidable> {

	id<MNFriendListModelController> _friendListModelController;
	id<MNAuthenticationManager> _authManager;
	MNUserSortRankPolicy* _userSortRankPolicy;
	id<MNFriendsFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNFriendsFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)friendListModelController:(id)arg1 didLoadConversationPeople:(id)arg2 ;
-(id)initWithUserProvider:(id)arg1 userSortRankPolicy:(id)arg2 authManager:(id)arg3 ;
-(void)setDelegate:(id<MNFriendsFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNFriendsFetcherDelegate>)delegate;
-(void)stop;
-(void)start;
@end

