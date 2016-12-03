/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, FBUserSession, FBMLoggedInUserInfoManager, NSString;

@interface MNMontageAudienceNUXManagerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	FBUserSession* _userSession;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                            //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                       //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) FBMLoggedInUserInfoManager * loggedInUserInfoManager;              //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(id)nonCachedMontageAudiencePickerWithIdentifier:(id)arg1 ;
-(FBUserSession *)userSession;
@end

