/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSetUpDataFetcherDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNUserSetUpDataFetcherControllerDelegate, FBProvider;
@class FBUserSession, FBMLoggedInUserInfoManager, MNCDNProfileImageDownloader, MNUserSetUpDataFetcher, NSString;

@interface MNUserSetUpDataFetcherController : NSObject <MNUserSetUpDataFetcherDelegate, FBClassProvidable> {

	id<MNUserSetUpDataFetcherControllerDelegate> _delegate;
	FBUserSession* _session;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	id<FBProvider> _loggedInUserFetcherProvider;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBProvider> _configContextManagerProvider;
	MNUserSetUpDataFetcher* _userDataFetcher;

}

@property (nonatomic,retain) FBUserSession * session;                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                      //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,retain) id<FBProvider> loggedInUserFetcherProvider;                                //@synthesize loggedInUserFetcherProvider=_loggedInUserFetcherProvider - In the implementation block
@property (nonatomic,retain) id<FBProvider> userSetUpFlowConfiguratorProvider;                          //@synthesize userSetUpFlowConfiguratorProvider=_userSetUpFlowConfiguratorProvider - In the implementation block
@property (nonatomic,retain) MNCDNProfileImageDownloader * profileImageDownloader;                      //@synthesize profileImageDownloader=_profileImageDownloader - In the implementation block
@property (nonatomic,retain) id<FBProvider> configContextManagerProvider;                               //@synthesize configContextManagerProvider=_configContextManagerProvider - In the implementation block
@property (nonatomic,retain) MNUserSetUpDataFetcher * userDataFetcher;                                  //@synthesize userDataFetcher=_userDataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserSetUpDataFetcherControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(void)setLoggedInUserInfoManager:(FBMLoggedInUserInfoManager *)arg1 ;
-(MNCDNProfileImageDownloader *)profileImageDownloader;
-(void)startUserDataFetching;
-(void)userSetUpDataFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userSetUpDataFetcher:(id)arg1 didFetchUserData:(id)arg2 ;
-(id)initWithSession:(id)arg1 profileImageDownloader:(id)arg2 loggedInUserInfoManager:(id)arg3 loggedInUserFetcherProvider:(id)arg4 configContextManagerProvider:(id)arg5 ;
-(void)setUserDataFetcher:(MNUserSetUpDataFetcher *)arg1 ;
-(id<FBProvider>)loggedInUserFetcherProvider;
-(void)setLoggedInUserFetcherProvider:(id<FBProvider>)arg1 ;
-(id<FBProvider>)userSetUpFlowConfiguratorProvider;
-(void)setUserSetUpFlowConfiguratorProvider:(id<FBProvider>)arg1 ;
-(void)setProfileImageDownloader:(MNCDNProfileImageDownloader *)arg1 ;
-(id<FBProvider>)configContextManagerProvider;
-(void)setConfigContextManagerProvider:(id<FBProvider>)arg1 ;
-(MNUserSetUpDataFetcher *)userDataFetcher;
-(void)setDelegate:(id<MNUserSetUpDataFetcherControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNUserSetUpDataFetcherControllerDelegate>)delegate;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

