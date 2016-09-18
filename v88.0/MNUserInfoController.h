/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNUserInfoPhoneNumberFetchRunning, FBProvider, FBMProfileURLUtils;
@class FBCurrentCountryManager, MNThreadParticipantNameFormatter, FBWebRTCCallController, MNInviteSender, MNNavigationCoordinator, MNThreadNicknameEditController, MNUserInfoConfiguration, UIView, NSArray, NSString;

@interface MNUserInfoController : NSObject <FBClassProvidable> {

	id<MNUserInfoPhoneNumberFetchRunning> _fetchPerformer;
	FBCurrentCountryManager* _countryManager;
	MNThreadParticipantNameFormatter* _nameFormatter;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	FBWebRTCCallController* _webRTCCallController;
	MNInviteSender* _inviteSender;
	id<FBMProfileURLUtils> _profileURLUtils;
	MNNavigationCoordinator* _navigationCoordinator;
	id<FBProvider> _threadNicknameEditControllerProvider;
	MNThreadNicknameEditController* _threadNicknameEditController;
	MNUserInfoConfiguration* _configuration;
	UIView* _presentingView;
	UIView* _sourceView;
	NSArray* _contactPoints;

}

@property (nonatomic,copy) MNUserInfoConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIView * presentingView;                            //@synthesize presentingView=_presentingView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,copy) NSArray * contactPoints;                              //@synthesize contactPoints=_contactPoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setPresentingView:(UIView *)arg1 ;
-(void)_fetchSyncContacts;
-(void)_createAndShowActionSheet;
-(id)_getActionOptions;
-(void)_showAlertControllerWithOptions:(id)arg1 ;
-(void)_viewUserProfile;
-(void)_callPhoneNumberWithIndex:(long long)arg1 ;
-(void)_callUserByVOIP;
-(void)_navigateToUserThread;
-(void)_inviteUser;
-(void)_editNickname;
-(void)setContactPoints:(NSArray *)arg1 ;
-(UIView *)presentingView;
-(NSArray *)contactPoints;
-(void)showInView:(id)arg1 sourceView:(id)arg2 configuration:(id)arg3 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setConfiguration:(MNUserInfoConfiguration *)arg1 ;
-(MNUserInfoConfiguration *)configuration;
@end
