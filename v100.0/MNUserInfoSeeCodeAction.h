/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUserInfoUpdateAction.h>

@protocol MNUserInfoUpdateActionDelegate;
@class FBMUser, MNSettingsTabConfiguration, MNMessengerCodeNavigationCoordinator, NSString;

@interface MNUserInfoSeeCodeAction : NSObject <FBClassProvidable, MNUserInfoUpdateAction> {

	MNSettingsTabConfiguration* _settingsTabConfiguration;
	MNMessengerCodeNavigationCoordinator* _messengerCodeNavigationCoordinator;
	FBMUser* _user;
	id<MNUserInfoUpdateActionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserInfoUpdateActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentWithSourceView:(id)arg1 ;
-(id)initWithSettingsTabConfiguration:(id)arg1 messengerCodeNavigationCoordinator:(id)arg2 ;
-(void)_openCode;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(id)actionTitle;
@end

