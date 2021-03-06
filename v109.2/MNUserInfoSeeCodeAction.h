/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>
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
-(void)presentWithSourceView:(id)arg1 ;
-(id)initWithSettingsTabConfiguration:(id)arg1 messengerCodeNavigationCoordinator:(id)arg2 ;
-(void)_openCode;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)actionTitle;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
@end

